#include <stdint.h>
#include <util/delay.h>
#include "lib/hd44780.h"

#define MY_BUTTON1 PD7
#define MY_BUTTON2 PD6 

short check_button_press_and_release(int button);

int main(void)
{
	//Setup
	LCD_Setup();
	
	int pos = 0;
	int buttonTwoPress = 0;

	//Print two lines with class info
	uint8_t line;
	while (1) {
		for (line = 0; line < 2; line++)
		{
			LCD_GotoXY(0, line);
			// if (check_button_press_and_release(MY_BUTTON1)) {
			// 	pos = 0;
			// 	LCD_Clear();
			// }

			// if (check_button_press_and_release(MY_BUTTON2)) {
			// 	pos++;
			// 	buttonTwoPress++;
			// 	LCD_Clear();

			// 	if (pos > 3) {
			// 		pos = 1;
			// 	}
			// }

			// if (pos == 0) {
			// 	if (line == 0) {
			// 		LCD_PrintString("Button 1 resets");
			// 	} else {
			// 		LCD_PrintString("Button 2 scrolls");
			// 	}
			// }

			// if (pos == 1) {
			// 	if (line == 0) {
			// 		LCD_PrintString("Matt");
			// 	} else {
			// 		LCD_PrintString("Logan");
			// 	}
			// }

			// if (pos == 2) {
			// 	if (line == 0) {
			// 		LCD_PrintString("Button 2");
			// 	} else { 
			// 		LCD_PrintString("pressed: ");
			// 		LCD_PrintInteger(buttonTwoPress);
			// 		LCD_PrintString(" times");
			// 	}
			// }

			// if (pos == 3) {
			// 	if (line == 0) {
			// 		LCD_PrintString("ECE 484");
			// 	} else {
			// 		LCD_PrintString("Section A");
			// 	}
			// }

			if (line == 0)
			{
				LCD_PrintString("ECE 484");
			}
			else 
			{
				LCD_PrintString("Chip Interfacing");
			} 
			// LCD_Clear();
		}
	}
	
	// while (1);
	
	return 0;
}

/* 
 * checks when a button on the D port is pressed assuming a pull-down in non-pressed state 
 * 
 * WIRING: input and resitor on same connection, Vcc on other connection
 */
// short check_button_press_and_release(int button)
// {
// 	int ret_val = 0;

// 	if ((PIND & (1 << button)) != 0)
// 	{
// 		/* software debounce */
// 		_delay_ms(15);
// 		if ((PIND & (1 << button)) != 0)
// 		{
// 			/* wait for button to be released */
// 			while((PIND & (1 << button)) != 0)
// 				ret_val = 1;
// 		}
// 	}

// 	return ret_val;
// }
