#include "pico/stdlib.h"

#ifndef LED_DELAY_MS
#define LED_DELAY_MS 1000
#endif

// Perform initialisation
int pico_led_init(void) 
{
    gpio_init(4);
    gpio_set_dir(4, GPIO_OUT);
    return PICO_OK;
}

// Turn the led on or off
void pico_set_led(bool led_on) 
{
    gpio_put(4, led_on);
}

int main() 
{
    int rc = pico_led_init();
    hard_assert(rc == PICO_OK);
    while (true) {
        pico_set_led(true);
        sleep_ms(LED_DELAY_MS);
        pico_set_led(false);
        sleep_ms(LED_DELAY_MS);
    }
}
