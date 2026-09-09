#include "stm32l4xx_hal.h"
#include <stdio.h>



//struct __FILE { int dummy;};
FILE __stdout;
 
int fputc(int ch, FILE *f)
{
uint8_t c;
	
  c = ch & 0x00FF;
	
  HAL_UART_Transmit_DMA(&huart2,&*c,1);
 
  
  return(ch);
}
