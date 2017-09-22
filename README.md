# WASAPIChecker

For low latency audio output on Windows, WASAPI is provided by Microsoft. To accomplish lowest audio latency, exclusive mode should be used.

In exclusive mode, only specific buffer length is supported and that value depends on sound chip, driver version and sampling frequeny. Any attempt to initialize WASAPI with unsupported buffer length simply fails.

This tool iterates WASAPI initialization for sampling frequency and buffer length. And lists all supported combinations.

## Sample output
```
Checking FS=22050
Checking FS=24000
Checking FS=32000
Checking FS=44100
  Supported bufsize: 160 frames (3.628118 msec, REFERENCE_TIME=36281)
  Supported bufsize: 192 frames (4.353741 msec, REFERENCE_TIME=43537)
  Supported bufsize: 224 frames (5.079365 msec, REFERENCE_TIME=50793)
  Supported bufsize: 256 frames (5.804989 msec, REFERENCE_TIME=58049)
  Supported bufsize: 288 frames (6.530612 msec, REFERENCE_TIME=65306)
  Supported bufsize: 320 frames (7.256236 msec, REFERENCE_TIME=72562)
  Supported bufsize: 352 frames (7.981859 msec, REFERENCE_TIME=79818)
  Supported bufsize: 384 frames (8.707483 msec, REFERENCE_TIME=87074)
  Supported bufsize: 416 frames (9.433107 msec, REFERENCE_TIME=94331)
  Supported bufsize: 448 frames (10.158730 msec, REFERENCE_TIME=101587)
  Supported bufsize: 480 frames (10.884354 msec, REFERENCE_TIME=108843)
  Supported bufsize: 512 frames (11.609977 msec, REFERENCE_TIME=116099)
  Supported bufsize: 544 frames (12.335601 msec, REFERENCE_TIME=123356)
  Supported bufsize: 576 frames (13.061224 msec, REFERENCE_TIME=130612)
  Supported bufsize: 608 frames (13.786848 msec, REFERENCE_TIME=137868)
  Supported bufsize: 640 frames (14.512472 msec, REFERENCE_TIME=145124)
  Supported bufsize: 672 frames (15.238095 msec, REFERENCE_TIME=152380)
  Supported bufsize: 704 frames (15.963719 msec, REFERENCE_TIME=159637)
  Supported bufsize: 736 frames (16.689342 msec, REFERENCE_TIME=166893)
  Supported bufsize: 768 frames (17.414966 msec, REFERENCE_TIME=174149)
  Supported bufsize: 800 frames (18.140590 msec, REFERENCE_TIME=181405)
  Supported bufsize: 832 frames (18.866213 msec, REFERENCE_TIME=188662)
  Supported bufsize: 864 frames (19.591837 msec, REFERENCE_TIME=195918)
  Supported bufsize: 896 frames (20.317460 msec, REFERENCE_TIME=203174)
  Supported bufsize: 928 frames (21.043084 msec, REFERENCE_TIME=210430)
  Supported bufsize: 960 frames (21.768707 msec, REFERENCE_TIME=217687)
  Supported bufsize: 992 frames (22.494331 msec, REFERENCE_TIME=224943)
Checking FS=48000
  Supported bufsize: 160 frames (3.333333 msec, REFERENCE_TIME=33333)
  Supported bufsize: 192 frames (4.000000 msec, REFERENCE_TIME=40000)
  Supported bufsize: 224 frames (4.666667 msec, REFERENCE_TIME=46666)
  Supported bufsize: 256 frames (5.333333 msec, REFERENCE_TIME=53333)
  Supported bufsize: 288 frames (6.000000 msec, REFERENCE_TIME=60000)
  Supported bufsize: 320 frames (6.666667 msec, REFERENCE_TIME=66666)
  Supported bufsize: 352 frames (7.333333 msec, REFERENCE_TIME=73333)
  Supported bufsize: 384 frames (8.000000 msec, REFERENCE_TIME=80000)
  Supported bufsize: 416 frames (8.666667 msec, REFERENCE_TIME=86666)
  Supported bufsize: 448 frames (9.333333 msec, REFERENCE_TIME=93333)
  Supported bufsize: 480 frames (10.000000 msec, REFERENCE_TIME=100000)
  Supported bufsize: 512 frames (10.666667 msec, REFERENCE_TIME=106666)
  Supported bufsize: 544 frames (11.333333 msec, REFERENCE_TIME=113333)
  Supported bufsize: 576 frames (12.000000 msec, REFERENCE_TIME=120000)
  Supported bufsize: 608 frames (12.666667 msec, REFERENCE_TIME=126666)
  Supported bufsize: 640 frames (13.333333 msec, REFERENCE_TIME=133333)
  Supported bufsize: 672 frames (14.000000 msec, REFERENCE_TIME=140000)
  Supported bufsize: 704 frames (14.666667 msec, REFERENCE_TIME=146666)
  Supported bufsize: 736 frames (15.333333 msec, REFERENCE_TIME=153333)
  Supported bufsize: 768 frames (16.000000 msec, REFERENCE_TIME=160000)
  Supported bufsize: 800 frames (16.666667 msec, REFERENCE_TIME=166666)
  Supported bufsize: 832 frames (17.333333 msec, REFERENCE_TIME=173333)
  Supported bufsize: 864 frames (18.000000 msec, REFERENCE_TIME=180000)
  Supported bufsize: 896 frames (18.666667 msec, REFERENCE_TIME=186666)
  Supported bufsize: 928 frames (19.333333 msec, REFERENCE_TIME=193333)
  Supported bufsize: 960 frames (20.000000 msec, REFERENCE_TIME=200000)
  Supported bufsize: 992 frames (20.666667 msec, REFERENCE_TIME=206666)
Checking FS=96000
  Supported bufsize: 288 frames (3.000000 msec, REFERENCE_TIME=30000)
  Supported bufsize: 320 frames (3.333333 msec, REFERENCE_TIME=33333)
  Supported bufsize: 352 frames (3.666667 msec, REFERENCE_TIME=36666)
  Supported bufsize: 384 frames (4.000000 msec, REFERENCE_TIME=40000)
  Supported bufsize: 416 frames (4.333333 msec, REFERENCE_TIME=43333)
  Supported bufsize: 448 frames (4.666667 msec, REFERENCE_TIME=46666)
  Supported bufsize: 480 frames (5.000000 msec, REFERENCE_TIME=50000)
  Supported bufsize: 512 frames (5.333333 msec, REFERENCE_TIME=53333)
  Supported bufsize: 544 frames (5.666667 msec, REFERENCE_TIME=56666)
  Supported bufsize: 576 frames (6.000000 msec, REFERENCE_TIME=60000)
  Supported bufsize: 608 frames (6.333333 msec, REFERENCE_TIME=63333)
  Supported bufsize: 640 frames (6.666667 msec, REFERENCE_TIME=66666)
  Supported bufsize: 672 frames (7.000000 msec, REFERENCE_TIME=70000)
  Supported bufsize: 704 frames (7.333333 msec, REFERENCE_TIME=73333)
  Supported bufsize: 736 frames (7.666667 msec, REFERENCE_TIME=76666)
  Supported bufsize: 768 frames (8.000000 msec, REFERENCE_TIME=80000)
  Supported bufsize: 800 frames (8.333333 msec, REFERENCE_TIME=83333)
  Supported bufsize: 832 frames (8.666667 msec, REFERENCE_TIME=86666)
  Supported bufsize: 864 frames (9.000000 msec, REFERENCE_TIME=90000)
  Supported bufsize: 896 frames (9.333333 msec, REFERENCE_TIME=93333)
  Supported bufsize: 928 frames (9.666667 msec, REFERENCE_TIME=96666)
  Supported bufsize: 960 frames (10.000000 msec, REFERENCE_TIME=100000)
  Supported bufsize: 992 frames (10.333333 msec, REFERENCE_TIME=103333)
Checking FS=192000
  Supported bufsize: 576 frames (3.000000 msec, REFERENCE_TIME=30000)
  Supported bufsize: 608 frames (3.166667 msec, REFERENCE_TIME=31666)
  Supported bufsize: 640 frames (3.333333 msec, REFERENCE_TIME=33333)
  Supported bufsize: 672 frames (3.500000 msec, REFERENCE_TIME=35000)
  Supported bufsize: 704 frames (3.666667 msec, REFERENCE_TIME=36666)
  Supported bufsize: 736 frames (3.833333 msec, REFERENCE_TIME=38333)
  Supported bufsize: 768 frames (4.000000 msec, REFERENCE_TIME=40000)
  Supported bufsize: 800 frames (4.166667 msec, REFERENCE_TIME=41666)
  Supported bufsize: 832 frames (4.333333 msec, REFERENCE_TIME=43333)
  Supported bufsize: 864 frames (4.500000 msec, REFERENCE_TIME=45000)
  Supported bufsize: 896 frames (4.666667 msec, REFERENCE_TIME=46666)
  Supported bufsize: 928 frames (4.833333 msec, REFERENCE_TIME=48333)
  Supported bufsize: 960 frames (5.000000 msec, REFERENCE_TIME=50000)
  Supported bufsize: 992 frames (5.166667 msec, REFERENCE_TIME=51666)
Press enter to exit.
```

## License

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>