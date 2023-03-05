// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"

// GLOBAL VARIABLES ----------------------------------------------------------|
struct age_data{
			uint8_t day;		//we use an 8 bit integer to save space.
			uint8_t month;
			uint16_t year;		//we use a 16 bit integer here because 8 can't handle values greater than 256.
			uint8_t age;
		};

		struct age_data my_age; 	//

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
		my_age.day = 26;
		my_age.month = 02;
		my_age.year = 2002;
		my_age.age = 21;

		init_LCD();

		int count = 0;

	while(1)
	{

		char output[3];
		sprintf(output, "%d", count);
		lcd_putstring(output);
		delay(150);
		count++;
		lcd_command(CLEAR);

		if(count >my_age.age){
			count = 0;
		}


	}
}


// OTHER FUNCTIONS -----------------------------------------------------------|


