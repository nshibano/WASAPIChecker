// WASAPIChecker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma comment(lib, "winmm.lib")
#include <Windows.h>
#include <Objbase.h>
#include <mmdeviceapi.h>
#include <Audioclient.h>
#include <time.h>
#include <io.h>

void ExitOnError(HRESULT hr)
{
	if (FAILED(hr))
	{
		fprintf(stderr, "WASAPI initialization error.");
		exit(-1);
	};
}

WAVEFORMATEX CreateWFX(int rate)
{
	WAVEFORMATEX wfx;
	wfx.wFormatTag = WAVE_FORMAT_PCM;
	wfx.nChannels = 2;
	wfx.nSamplesPerSec = rate;
	wfx.nAvgBytesPerSec = 4 * rate;
	wfx.nBlockAlign = 4;
	wfx.wBitsPerSample = 16;
	wfx.cbSize = 0;

	return wfx;
}

int main()
{
	CoInitialize(NULL);

	HRESULT hr;

	IMMDeviceEnumerator *pEnumerator = NULL;
	hr = CoCreateInstance(
		__uuidof(MMDeviceEnumerator), NULL,
		CLSCTX_ALL, __uuidof(IMMDeviceEnumerator),
		(void**)&pEnumerator);

	IMMDevice *pDevice = NULL;
	hr = pEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &pDevice);

	int rates[7] = { 22050, 24000, 32000, 44100, 48000, 96000, 192000 };

	for (int i = 0; i < 7; i++)
	{
		printf("Checking FS=%d\r\n", rates[i]);
		WAVEFORMATEX wfx = CreateWFX(rates[i]);

		for (int j = 0; j < 1000; j++)
		{
			REFERENCE_TIME period = 10000000.0 / rates[i] * j;
			IAudioClient *pAudioClient = NULL;
			hr = pDevice->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (void**)&pAudioClient);
			hr = pAudioClient->Initialize(AUDCLNT_SHAREMODE_EXCLUSIVE, AUDCLNT_STREAMFLAGS_EVENTCALLBACK, period, period, &wfx, NULL);
			if (SUCCEEDED(hr))
			{
				UINT size;
				pAudioClient->GetBufferSize(&size);
				printf("  Supported bufsize: %d frames (%f msec, REFERENCE_TIME=%d)\r\n", size, 1000.0 / rates[i] * size, period);
			}
			pAudioClient->Release();
		}
	}

	printf("Press enter to exit.");
	getchar();
	return 0;
}

