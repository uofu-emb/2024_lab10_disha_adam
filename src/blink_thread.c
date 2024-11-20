#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/cyw43_arch.h"

bool on = false;

#define BLINK_TASK_PRIORITY     ( tskIDLE_PRIORITY + 2UL )
#define BLINK_TASK_STACK_SIZE configMINIMAL_STACK_SIZE

void blink_task(__unused void *params) 
{
    while (true) 
    {
        gpio_put(4, on);
        vTaskDelay(500);
        on = !on;
    }
}

int main( void )
{
    stdio_init_all();
    gpio_init(4);
    gpio_set_dir(4, GPIO_OUT);
    const char *rtos_name;
    rtos_name = "FreeRTOS";
    TaskHandle_t task;
    xTaskCreate(blink_task, "BlinkThread",
                BLINK_TASK_STACK_SIZE, NULL, BLINK_TASK_PRIORITY, NULL);
    vTaskStartScheduler();
    return 0;
}
