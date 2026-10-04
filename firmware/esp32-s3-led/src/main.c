#include "driver/gpio.h"                             // Makes the declarations in ESP-IDF's GPIO header available to this source file

// LED Pin definitions
#define LED_PIN1 GPIO_NUM_4
#define LED_PIN2 GPIO_NUM_5
#define LED_PIN3 GPIO_NUM_6

void app_main() {                                   // Application entry point

    gpio_set_direction(LED_PIN1, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN2, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN3, GPIO_MODE_OUTPUT);

    gpio_set_level(LED_PIN1, 1);
    
}
