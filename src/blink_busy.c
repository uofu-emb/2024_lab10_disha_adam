#pragma GCC optimize ("O0")

#include "pico/stdlib.h"

#ifndef LED_DELAY_MS
#define LED_DELAY_MS 1000
#endif

int main() 
{
    while(1) 
    {
        uint32_t k;
        for (int i = 0; i < 30; i++) 
        {
            uint32_t j = 0;
            j = ((~j >> i) + 1) * 27644437;
            k = j;
        }
    }
}
