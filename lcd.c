#include <stdint.h>
#include <util/delay.h>
#include "lib/hd44780.h"

int main(void)
{
	//Setup
	LCD_Setup();

	uint8_t line;
	while (1) {
		for (line = 0; line < 2; line++)
		{
			LCD_GotoXY(0, line);
			
			if (line == 0)
			{
				LCD_PrintString("ECE 484");
			}
			else 
			{
				LCD_PrintString("Chip Interfacing");
			} 
		}
	}
	
	
	return 0;
}
