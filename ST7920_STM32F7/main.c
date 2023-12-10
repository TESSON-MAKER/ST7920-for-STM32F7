/*-----------Code Created by Paul TESSON------------------*/

#include "tim.h"
#include "st7920_fonts.h"
#include "st7920.h"

int main(void) 
{
	ST7920_Init();
	ST7920_Clear();
	ST7920_GraphicMode(1);
	
	while (1) 
	{
		ST7920_Clear_GLCD_Buffer();
		ST7920_Font_Print(1, 0, 0, Arial12x12, "Hello World !");
		ST7920_Font_Print(1, 0, 12, Arial12x12, "Thanks to Vincent");
		ST7920_Font_Print(1, 0, 24, Arial12x12, "Kerhoas (ENIB) and");
		ST7920_Font_Print(1, 0, 36, Arial12x12, "embeddedexpert.io");
		ST7920_Font_Print(1, 0, 48, Arial12x12, "for helping me !");
		ST7920_Send_GLCD_Buffer();
		TIM_Wait(1000);
	}
}
