#include <Arduino.h>

void x_print_free_heap(const char *TAG)
{
    Serial.print("memory_usage");
    if (TAG != NULL && strlen(TAG) > 0)
    {
        Serial.print(",tag=");
        Serial.print(TAG);
    }

    Serial.print(" ");

    Serial.printf("free_heap=%d", ESP.getFreeHeap());

    if (psramFound())
    {
        Serial.printf(",psram_free_heap=%d", ESP.getFreePsram());
    }

    Serial.println();
}