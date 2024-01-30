#include "stm32f4xx.h"

void SysTick_Handler(void) {
    GPIOA->ODR ^= GPIO_ODR_OD5;
}

int main(void) {
       SysTick_Config(SystemCoreClock/1000);
       RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
       GPIOA->MODER |= GPIO_MODER_MODER5_0;
    while (1) {
        }
}