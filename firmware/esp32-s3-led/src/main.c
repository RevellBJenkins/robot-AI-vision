#include "driver/gpio.h"                             // Makes the declarations in ESP-IDF's GPIO header available to this source file
#include "freertos/FreeRTOS.h"                       // Gives core FreeRTOS definitions needed for timing/task-related code.
#include "freertos/task.h"                           // Declares the task managment functions used

// LED Pin definitions
#define LED_PIN1 GPIO_NUM_4
#define LED_PIN2 GPIO_NUM_5
#define LED_PIN3 GPIO_NUM_6

void app_main() {                                   // Application entry point

    gpio_set_direction(LED_PIN1, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN2, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN3, GPIO_MODE_OUTPUT);

    while (1) {                                     // While true, keep executing this block
        gpio_set_level(LED_PIN1, 1);
        vTaskDelay(pdMS_TO_TICKS(1000));            // Blocks current FreeRTOS task for specified # of scheduler ticks, allowing the CPU to execute other tasks

        gpio_set_level(LED_PIN1, 0);
        vTaskDelay(pdMS_TO_TICKS(1000)); 

        

    }

}
