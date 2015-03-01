/*	Names: Kathryn DiPippo, Rebecca Halzack, Seth Rutman
	Section: 4B
	Date: 3/6/2015
	File name: Lab 2 - LITEC Mastermind
	Description: Introduction to analog-to-digital conversion using C8051 and development
	of a simple interactive game using the C8051 as the controller, and utilizing various
	switches, potentiometers (pot), buzzers, and LEDs, on the protoboard for game I/O.
*/

#include <c8051_SDCC.h>
#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------------------------------------
// Function Prototypes
//-----------------------------------------------------------------------------
void Port_Init(void);      // Initialize ports for input and output
void Timer_Init(void);     // Initialize Timer 0 
void Interrupt_Init(void); //Initialize interrupts
void Timer0_ISR(void) __interrupt 1;
int Start_Button(void);
int Switch_A0(void);
int Switch_A1(void);
int Switch_B0(void);
int Switch_B1(void);
int Switch_C0(void);
int Switch_C1(void);
unsigned char random(void);

//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------
__sbit __at 0x84 BILEDA0;
__sbit __at 0x85 BILEDA1;
__sbit __at 0x82 SWITCHA0;
__sbit __at 0x83 SWITCHA1;
__sbit __at 0x80 BILEDB0;
__sbit __at 0x81 BILEDB1;
__sbit __at 0xA6 SWITCHB0;
__sbit __at 0xA7 SWITCHB1;
__sbit __at 0xA4 BILEDC0;
__sbit __at 0xA5 BILEDC1;
__sbit __at 0xA2 SWITCHC0;
__sbit __at 0xA3 SWITCHC1;
__sbit __at 0xB0 AMBER;
__sbit __at 0xB1 GREEN;
__sbit __at 0xB2 BUZZER;
__sbit __at 0xB3 BUTTON;
// we need something for the start button (See 428)
// we need something for the buzzer
// we need all the things for the other 2 LEDs

// check line 430 to see if those inputs are correct

unsigned int Counts = 0;				// elements to be used when keeping track of time
unsigned char Seconds = 0;
unsigned char amber_score = 0;
unsigned char green_score = 0;
unsigned char points = 0;				// temporary points value obtained per round
unsigned char result;					// potentiometer value reading

unsigned char TMAX = 0;					// maximum time per round
unsigned char timer = 0;				// timer for each round

int Mastermind_Array[3] = { 7, 7, 7 };
int Guess_Array[3] = { 7, 7, 7 };		// the 7s are arbitrary values that will shortly be written over


//-----------------------------------------------------------------------------
/* This program demonstrates how to perform an A/D Conversion */
main()
{
	Sys_Init();		// Initialize the C8051 board
	putchar(' ');	// Required for output to terminal
	Port_Init();	// Configure P1.0 for analog input
	ADC_Init();		// Initialize A/D conversion
	Interrupt_Init();
    Timer_Init();    // Initialize Timer 0
	putchar(' ');    // the quote fonts may not copy correctly into SiLabs IDE
	
	while (1) // infinite loop
	{
		//BiLEDs are off, Amber & Green LEDs are off, output a message, clear scores, and wait
		//  for the pushbutton to be pressed.
		AMBER = 1; // AmberLED is off
		GREEN = 1; // GreenLED is off
		// turn off all other LEDS
		BILEDA0 = 0;
		BILEDA1 = 0;
		BILEDB0 = 0;
		BILEDB1 = 0;
		BILEDC0 = 0;
		BILEDC1 = 0;
		printf("\rSet the speed pot and press the pushbutton to begin LITEC Mastermind.\n");
		while (BUTTON); // wait for button to be pressed before starting
		//2. Read the game speed pot voltage and calculate TMAX. Set T = TMAX and output value (ms).
		result = read_AD_input(0); // Read the A/D value on P1.0
		TMAX = ((18750 * result)+15000);
		printf("\rStarting Period: %u\n", TMAX);
		
		//Game play
		//3. Repeat the following steps for each player.
		AMBER = 0;													// 4. Light Amber player LED.
		printf("\n\rAmber Player Turn\n");							// Amber's turn
		
		GENERATE_MASTERMIND_ARRAY(mastermind_array);				//5. Generate 3 random values from 0 to 2 for BiLED pattern.
		//6. Repeat steps 7 to 15 until a match is found.
		while (FUNCTION_C(Mastermind_Array, Guess_Array) != 3)		// while the sequence hasn't been guessed
		{
			//7. Start timed window for T ms and wait for pushbuttons to be pressed. Stop the clock if
			//TMAX is exceeded to avoid timing errors due to overflow.
			Counts = 0; // reset timer
			Seconds = 0;
			//8. While waiting for pushbutton read 6 slide switches and activate corresponding BiLEDs.
			while ((BUTTON) && (TMAX >= Seconds))
			{
				FUNCTION_A();
			}
			timer = Seconds;
			//9. When the “guess” pushbutton is pressed capture the numerical value of the 3 pairs of
			//slide switches (0, 1, or 2 for each pair).
			FUNCTION_G(Guess_Array); // this creates Guess_Array
			
			//10. If TMAX was reached set points to 6, otherwise set points to 5T(ms)/TMAX(ms) + 1 (integer divide and ignore fraction)
			if (timer >= TMAX)
			{
				points = 6;
			}
			else if (timer < TMAX)
			{
				points = (((5*timer)/TMAX) + 1);
			}
			//12. Add points to score.
			amber_score += points;
			points = 0; // reset
			
			//11. Compare the slide switches pair numerical values (0, 1, or 2) to the random color code
			//values and display on SecureCRT the current 3-character guess as either 0, R, or G for
			//each color or the digits 0, 1 or 2. Also display the number of correct colors, the number of
			//correct positions and the total points scored so far.
			FUNCTION_Da(Mastermind_Array, Guess_Array, amber_score); // Formatted Print function and buzzer function for AMBER; reads in Guess_Array and amber_score
			//14. If no complete match is found repeat back to step 6.
		}
		  
		//16. Change player LED to Green, and after waiting for the pushbutton, repeat back to step 5.
		GREEN = 0;													// 4. Light Green player LED.
		printf("\n\rGreen Player Turn\n");							// Green's turn
		
		GENERATE_MASTERMIND_ARRAY(mastermind_array);				//5. Generate 3 random values from 0 to 2 for BiLED pattern.
		//6. Repeat steps 7 to 15 until a match is found.
		while (FUNCTION_C(Mastermind_Array, Guess_Array) != 3)		// while the sequence hasn't been guessed
		{
			//7. Start timed window for T ms and wait for pushbuttons to be pressed. Stop the clock if
			//TMAX is exceeded to avoid timing errors due to overflow.
			Counts = 0; // reset timer
			Seconds = 0;
			//8. While waiting for pushbutton read 6 slide switches and activate corresponding BiLEDs.
			while ((BUTTON) && (TMAX >= Seconds))
			{
				FUNCTION_A();
			}
			timer = Seconds;
			//9. When the “guess” pushbutton is pressed capture the numerical value of the 3 pairs of
			//slide switches (0, 1, or 2 for each pair).
			FUNCTION_G(Guess_Array); // this creates Guess_Array
			
			//10. If TMAX was reached set points to 6, otherwise set points to 5T(ms)/TMAX(ms) + 1 (integer divide and ignore fraction)
			if (timer >= TMAX)
			{
				points = 6;
			}
			else if (timer < TMAX)
			{
				points = (((5*timer)/TMAX) + 1);
			}
			//12. Add points to score.
			green_score += points;
			points = 0; // reset
			
			//11. Compare the slide switches pair numerical values (0, 1, or 2) to the random color code
			//values and display on SecureCRT the current 3-character guess as either 0, R, or G for
			//each color or the digits 0, 1 or 2. Also display the number of correct colors, the number of
			//correct positions and the total points scored so far.
			FUNCTION_Db(Mastermind_Array, Guess_Array, green_score); // Formatted Print function and buzzer function for GREEN; reads in Guess_Array and green_score
			//14. If no complete match is found repeat back to step 6.
		}
	}

	//Game end
	printf("\n\rAmber Points = %u", amber_score);
	printf(", Green Points = %u/n", green_score);
	//17. If second turn is done then calculate total score and declare a winner.
	if (green_score > amber_score)
	{
		printf("\r\tWinner is Amber!"\n);
	}
	else if (amber_score > green_score)
	{
		printf("\r\tWinner is Green!\n");
	}
	else if (amber_score == green_score)
	{
		printf("\r\tIt's a tie. FIGHT TO THE DEATH!\n");
	}
	//18. Wait for the pushbutton to be pressed before starting a new game (step 1).
	while (BUTTON);		// stall here until it is pressed again.
	
}


//------------------------------------------------
void GENERATE_MASTERMIND_ARRAY(Mastermind_Array)
{	
	Mastermind_Array[0] = random(); // random integer between 0,1,2
	Mastermind_Array[1] = random(); // random integer between 0,1,2
	Mastermind_Array[2] = random(); // random integer between 0,1,2
}

//------------------------------------------------
// Function for changing the colors of the BILEDS prior to guessing
void FUNCTION_A(void)
{
	// so there are 3 BILEDs, and each one comes with 2 switches
	// ----------------------BILEDA--------------------------------
	if (!Switch_A1())  // turn BILEDA off
	{
		BILEDA0 = 0;
		BILEDA1 = 0;
	}
	else if (Switch_A0() && (!Switch_A1())) // turn BILEDA to RED
	{
		BILEDA0 = 0;
		BILEDA1 = 1;
	}
	else if (Switch_A0() && Switch_A1()) // turn BILEDA to GREEN
	{
		BILEDA0 = 1;
		BILEDA1 = 0;
	}
	// ----------------------BILEDB--------------------------------
	if (!Switch_B1())  // turn BILEDB off
	{
		BILEDB0 = 0;
		BILEDB1 = 0;
	}
	else if (Switch_B0() && (!Switch_B1())) // turn BILEDB to RED
	{
		BILEDB0 = 0;
		BILEDB1 = 1;
	}
	else if (Switch_B0() && Switch_B1()) // turn BILEDB to GREEN
	{
		BILEDB0 = 1;
		BILEDB1 = 0;
	}
	// ----------------------BILEDC--------------------------------
	if (!Switch_C1())  // turn BILEDC off
	{
		BILEDC0 = 0;
		BILEDC1 = 0;
	}
	else if (Switch_C0() && (!Switch_C1())) // turn BILEDC to RED
	{
		BILEDC0 = 0;
		BILEDC1 = 1;
	}
	else if (Switch_C0() && Switch_C1()) // turn BILEDC to GREEN
	{
		BILEDC0 = 1;
		BILEDC1 = 0;
	}
}

//------------------------------------------------
// Function for calculating number of correct colors
char FUNCTION_B(Mastermind_Array, Guess_Array)
{
	int flag = 0;
	unsigned char number_of_correct_colors = 0;
	// Temporarily duplicate the Mastermind_Array
	int MA_Copy[3];
	for (int i=0; i<3; i++)
	{
		MA_Copy[i] = Mastermind_Array[i];
	}
	for (int i=0; i<3; i++) // iterate through Guess_Array
	{
		for (int j=0; j<3; j++) // iterate through Mastermind_Array
		{
			if ((Guess_Array[i] == Mastermind_Array[j]) && (flag == 0;))
			{
				number_of_correct_colors++;
				Mastermind_Array[j] = 0;
				flag = 1;
			}
		}
		flag = 0; // reset flag
	}
	return number_of_correct_colors;
}

//------------------------------------------------
// Function for calculating number of correct spots
char FUNCTION_C(Mastermind_Array, Guess_Array)
{
	unsigned char number_of_correct_spots = 0;
	for (int i=0; i<3; i++)
	{
		if Mastermind_Array[i] == Guess_Array[i]
		{
			number_of_correct_spots++;
		}
	]
	return number_of_correct_spots;
}

//------------------------------------------------
// Formatted Print function for AMBER; reads in Guess_Array and amber_score
void FUNCTION_Da(Mastermind_Array, Guess_Array, amber_score)
{
	printf("\r");
	for (int i=0; i<3; i++)
	{
		printf(Guess_Array[i]);
	}
	print out a tab
	printf("\t%u", FUNCTION_B(Mastermind_Array, Guess_Array));
	printf("\t%u", FUNCTION_C(Mastermind_Array, Guess_Array));
	printf9"\t%u, amber_score);
	if (FUNCTION_B(Mastermind_Array, Guess_Array) == 0)
	{
		//13. If no color matches are found sound the buzzer (5000ms).
		FUNCTION_E(); // Function that plays buzzer once, to happen when no color matches are found
	}
	if (FUNCTION_C(Mastermind_Array, Guess_Array) == 3)
	{
		printf("\t(Match!)\n");
		printf("Amber Points = %u\n", amber_score);
		//15. If a perfect match is found display score for the turn & sound 5 very short buzzer blasts.
		FUNCTION_F(); // Function that plays when the sequence has been correctly guessed
	}
	printf("\n");
}

//------------------------------------------------
// Formatted Print function for GREEN; reads in Guess_Array and green_score
void FUNCTION_Db(Mastermind_Array, Guess_Array, green_score)
{
	printf("\r");
	for (int i=0; i<3; i++)
	{
		printf(Guess_Array[i]);
	}
	print out a tab
	printf("\t%u", FUNCTION_B(Mastermind_Array, Guess_Array));
	printf("\t%u", FUNCTION_C(Mastermind_Array, Guess_Array));
	printf9"\t%u, green_score);
	if (FUNCTION_B(Mastermind_Array, Guess_Array) == 0)
	{
		//13. If no color matches are found sound the buzzer (5000ms).
		FUNCTION_E(); // Function that plays buzzer once, to happen when no color matches are found
	}
	if (FUNCTION_C(Mastermind_Array, Guess_Array) == 3)
	{
		printf("\t(Match!)\n");
		printf("Green Points = %u\n", green_score);
		//15. If a perfect match is found display score for the turn & sound 5 very short buzzer blasts.
		FUNCTION_F(); // Function that plays when the sequence has been correctly guessed
	}
	printf("\n");
}

//------------------------------------------------
// Function that plays buzzer once, to happen when no color matches are found
void FUNCTION_E(void)
{
	//13. If no color matches are found sound the buzzer (5000ms).
	Seconds = 0;
	// while the counts does not exceed 5000ms (5 seconds)
	while (Seconds <= 5)
	{
		BUZZER = 0; // turn buzzer on
	}
	BUZZER = 1;	// turn buzzer off
}

//------------------------------------------------
// Function that plays when the sequence has been correctly guessed
void FUNCTION_F(void)
{
	//15. If a perfect match is found display score for the turn & sound 5 very short buzzer blasts.
	Counts = 0;
	unsigned int buzzer_delay = 168;
	for (int i=0; i<5; i++)
	{
		Counts = 0;
		while (Counts <= buzzer_delay)
		{
			BUZZER = 0; // turn buzzer on
		}
		Counts = 0;
		while (Counts <= buzzer_delay)
		{
			BUZZER = 1; // turn buzzer off
		}
	}
	BUZZER = 1; //once more for good measure
}

//------------------------------------------------
// Function that creates the Guess_Array based on the states of the LEDS
void FUNCTION_G(Guess_Array)
{
	// ----------------------BILEDA--------------------------------
	if ((BILEDA0 == 0) && (BILEDA1 == 0))
	{
		Guess_Array[0] = 0; // off
	}
	else if ((BILEDA0 == 0) && (BILEDA1 == 1))
	{
		Guess_Array[0] = 1; // red
	}
	else if ((BILEDA0 == 1) && (BILEDA1 == 0))
	{
		Guess_Array[0] = 2;  // green
	}
	
	// ----------------------BILEDB--------------------------------
	if ((BILEDB0 == 0) && (BILEDB1 == 0))
	{
		Guess_Array[1] = 0; // off
	}
	else if ((BILEDB0 == 0) && (BILEDB1 == 1))
	{
		Guess_Array[1] = 1; // red
	}
	else if ((BILEDB0 == 1) && (BILEDB1 == 0))
	{
		Guess_Array[1] = 2;  // green
	}
	
	// ----------------------BILEDC--------------------------------
	if ((BILEDC0 == 0) && (BILEDC1 == 0))
	{
		Guess_Array[2] = 0; // off
	}
	else if ((BILEDC0 == 0) && (BILEDC1 == 1))
	{
		Guess_Array[2] = 1; // red
	}
	else if ((BILEDC0 == 1) && (BILEDC1 == 0))
	{
		Guess_Array[2] = 2;  // green
	}
}








//***************
void Port_Init(void)
{
	P1MDIN &= ~0x01;	// Set P1.0 for analog input
	P1MDOUT &= ~0x01;	// Set P1.0 to open drain
	P1 |= 0x01;			// Send logic 1 to input pin P1.0
	P0MDOUT |= 0x33;	// Set output pins to push-pull
	P0MDOUT &= 0xF3;	// Set input pins to open-drain
	P0 |= ~0xF3;		// Set input pins to high impedance
	P2MDOUT |= 0x30;	// Set output pins to push-pull
	P2MDOUT &= 0x33;	// Set input pins to open-drain
	P2 |= ~0x33;		// Set input pins to high impedance
	P3MDOUT |= 0x07;	// Set output pins to push-pull
	P3MDOUT &= 0xF7;	// Set input pins to open-drain
	P3 |= ~0xF7;		// Set input pins to high impedance
}

void ADC_Init(void)
{
	REF0CN = 0x03; // Set Vref to use internal reference voltage (2.4 V)
	ADC1CN = 0x80; // Enable A/D converter (ADC1)
	ADC1CF |= 0x01; // Set A/D converter gain to 1
}

unsigned char read_AD_input(unsigned char n)
{
	AMX1SL = n; // Set P1.n as the analog input for ADC1
	ADC1CN = ADC1CN & ~0x20; // Clear the “Conversion Completed” flag
	ADC1CN = ADC1CN | 0x10; // Initiate A/D conversion

	while ((ADC1CN & 0x20) == 0x00);// Wait for conversion to complete

	return ADC1; // Return digital value in ADC1 register
}

/******************************************************************************/
/*
  This function demonstrates how to obtain a random integer between 0 and 1 in
  C. You may modify and use this code to get a random integer between 0 and N.
*/

/*return a random integer number between 0 and 1*/
unsigned char random(void)
{
    return (rand()%3);  // rand returns a random number between 0 and 32767.
                        // the mod operation (%) returns the remainder of 
                        // dividing this value by 3 and returns the result,
                        // a value of either 0, 1, or 2.
}

//***************
void Interrupt_Init(void)
{
    ET0 = 1;      // enable Timer0 Interrupt request
    EA = 1;       // enable global interrupts
}

//***************
void Timer_Init(void)
{

    CKCON |= 0x08;  // Timer0 uses SYSCLK as source
    TMOD &= 0xF0;   // clear the 4 least significant bits
    TMOD |= 0x01;   // Timer0 in mode 1
    TR0 = 0;           // Stop Timer0
    TL0 = 0;           // Clear low byte of register T0
    TH0 = 0;           // Clear high byte of register T0

}

//***************
void Timer0_ISR(void) __interrupt 1
{
	Counts++;
	if(Counts == 337)
	{
		Seconds ++;
		Counts = 0;
	}
}

//***************
// Sensor - Returns a 0 if Pushbutton 1 not activated
// or a 1 if Pushbutton 1 is activated.
// This code reads a single input only, associated with PB1
// Note this code is not used by function yet, you must incorporate it
int Start_Button(void)
{
	if (!PB0)
	{
		return 1;
	}
	else return 0;
}

//***************
// Sensor - Returns a 0 if Slide switch is 'off'
// or a 1 if Slide switch is 'on'
// This code reads a single input only, associated with SS
int Switch_A0(void)
{
	if (!SWITCHA0) return 1;
	else return 0;
}
int Switch_A1(void)
{
	if (!SWITCHA1) return 1;
	else return 0;
}

int Switch_B0(void)
{
	if (!SWITCHB0) return 1;
	else return 0;
}
int Switch_B1(void)
{
	if (!SWITCHB1) return 1;
	else return 0;
}

int Switch_C0(void)
{
	if (!SWITCHC0) return 1;
	else return 0;
}
int Switch_C1(void)
{
	if (!SWITCHC1) return 1;
	else return 0;
}