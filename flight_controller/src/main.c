#include <stdint.h>
#include <stdio.h>
#include "stm32f1xx.h"
#include "clock.h"
#include "usart1.h"
#include "i2c1.h"
#include "imu.h"
#include "bmp180.h"

int main(void) 
{
    configure_max_clock();
    usart1_init();
    i2c1_master_init();
    bmp180_init();

    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
    GPIOC->CRH |= GPIO_CRH_MODE13;

    usart1_write_string("STM32 Initialized\n");

    while (1) {
        int16_t x, y, z;
        imu_get_raw_acceleration(&x, &y, &z);
        double alt = bmp180_get_altitude(1009);

        GPIOC->ODR ^= GPIO_ODR_ODR13;
    }
    return 0;
}
