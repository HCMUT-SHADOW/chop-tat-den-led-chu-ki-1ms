#include "stm32f4xx_hal.h"

void SysTick_Handler(void) {
        HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
}

int main(void) {
       HAL_Init();
       HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);
       HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = GPIO_PIN_5;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    while (1) {
        }
}
