# ESP Heap Info

A little library that prints current heap info to the console.
Currently, it only writes the free heap size of the ESP32's internal and pSRAM (if available).

## API

### Print Heap Info to Serial

Signature:

```c++
void x_print_heap_info(const char* tag = "");
```

Example:

```c++
#include <x_esp_heap_info.h>

// somewhere in your code

x_print_heap_info("before_classify");
```

It will print the following output to the serial

```
memory_usage,tag=before_classify free_heap=171568,psram_free_heap=2097100
```

The output format follows InfluxDB line protocol except the timestampt is missing.

## Stability

Highly unstable. Breaking changes might come often. Use at your own risk.