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
		
	while(1)
	{

		


	}
}


// OTHER FUNCTIONS -----------------------------------------------------------|


