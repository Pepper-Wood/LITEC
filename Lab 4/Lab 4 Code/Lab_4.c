/*  Names: Kathryn DiPippo, Rebecca Halzack, Seth Rutman
	Section: 4B
	Date: 4/7/2015
	File name: Lab 4
	Description:
	- Control the steering using code developed in Lab 3 to integrate the compass and ranger systems
	- Read battery voltage using analog to digital conversion
	- Allow display and input usage from the LCD display screen and keypad.Sample code for main function to read the compass and ranger
*/

#include <c8051_SDCC.h>
#include <stdlib.h>// needed for abs function
#include <stdio.h>
#include <i2c.h>

//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init(void);
void SMB_Init(void);
void ADC_Init(void);
void Interrupt_Init(void);
void PCA_ISR(void) __interrupt 9;
int read_compass(void);
void set_servo_PWM(void);
int read_ranger(void); // new feature - read value, and then start a new ping
void set_drive_PWM(void);
int pick_heading(void); // function which allow operator to pick desired heading

//-----------------------------------------------------------------------------
// Define global variables
//-----------------------------------------------------------------------------
unsigned int PW_CENTER = 2760;
unsigned int PW_RIGHT = 3500;
unsigned int PW_LEFT = 2030;
unsigned int SERVO_PW = 2760;
unsigned int SERVO_MAX = 3500;
unsigned int SERVO_MIN = 2030;
unsigned char new_heading = 0; // flag for count of compass timing
unsigned char new_range = 0; // flag for count of ranger timing
unsigned int heading;
unsigned int range;
unsigned char r_count; // overflow count for range
unsigned char h_count; // overflow count for heading

//=============================================================================
//-----------------------------------------------------------------------------
// Main Function
void main(void)
{
	unsigned char run_stop; // define local variables
	Sys_Init(); // initialize board
	Port_Init();
	PCA_Init();
	SMB_Init
	r_count = 0;
	h_count = 0;
	while (1)
	{
		run_stop = 0;
		while (!run) // make run an sbit for the run/stop switch
		{ // stay in loop until switch is in run position
			if (run_stop == 0)
			{
				desired_heading = pick_heading();
				desired_range = pick_range();
				run_stop = 1: // only try to update desired heading once
			}
		}
		if (new_heading) // enough overflows for a new heading
		{
			heading = read_compass();
			set_servo_PWM(); // if new data, adjust servo PWM for compass & ranger
			Lab 4: Heading/Ranger Integration, Battery Voltage and LCD Display Embedded Control Lab Manual
			14
			new_heading = 0;
			h_count = 0;
		}
		if (new_range) // enough overflow for a new range
		{
			range = read_ranger(); // get range
			// read_range must start a new ping after a read
			set_range_adj(); // if new data, set value to adjust steering PWM
			new_range = 0;
			r_count = 0;
		}
	}
}

//=============================================================================
//-----------------------------------------------------------------------------
// Set up ports for input and output
void Port_Init()
{
	P1MDOUT |= 0x01; //set output pin for CEX0 in push-pull mode
	P3MDOUT &= 0x7F; // set input pin for 3.7 to open-drain
	P3		|= ~0x7F;// set input pin for 3.7 to high impedence
}

//-----------------------------------------------------------------------------
// Set up Programmable Counter Array
void PCA_Init(void)
{
	PCA0CPM0 = 0xC2;	// CCM0 in 16-bit compare mode
	PCA0CN = 0x40;		// Enable PCA Counter
	PCA0MD = 0x81;		// Enable CF Interrupt and SYSCLK/12
	EA = 1;				// Enable Global Interrupts
	EIE1 |= 0x08;		// Enable PCA Interrupt
}

//-----------------------------------------------------------------------------
// PCA_ISR: Interrupt Service Routine for Programmable Counter Array Overflow Interrupt
void PCA_ISR(void) __interrupt 9
{
	if (CF)
	{
		CF = 0; // clear overflow indicator
		h_count++;
		if (h_count>=2)
		{
			new_heading=1;
			h_count = 0;
		}
		r_count++;
		if (r_count>=4)
		{
			new_range = 1;
			r_count = 0;
		}
		PCA0L = PCA_start;
		PCA0H = PCA_start >> 8;
	}
	// handle other PCA interrupt sources
	PCA0CN &= 0xC0;
}

//-----------------------------------------------------------------------------
// Set up the SMB
void SMB_Init(void)
{
	SMB0CR=0x93;	//Set SCL to 100KHz
	ENSMB=1; 		//Bit 6 of SMB0CN, enable the SMBus
}

//-----------------------------------------------------------------------------
void ADC_Init(void)
{
	REF0CN = 0x03;	// Set Vref to use internal reference voltage (2.4 V)
	ADC1CN = 0x80;	// Enable A/D converter (ADC1)
	ADC1CF |= 0x01; // Set A/D converter gain to 1
}

//-----------------------------------------------------------------------------
// Set up interrupts
void Interrupt_Init(void)
{
	EIE1 |= 0x08;	//Enable PCA0 Interrupt (bit 3) 
	EA = 1;			//Enable global interrupts
}

//-------------------------------------------------------------------------------
// Compass Reading Function
int read_compass(void)
{
	unsigned char addr = 0xC0; // the address of the sensor, 0xC0 for the compass
	unsigned char Data[2]; // Data is an array with a length of 2
	unsigned int read_heading; // the heading returned in degrees between 0 and 3599
	i2c_read_data(addr, 2, Data, 2); // read two byte, starting at reg 2
	read_heading =(((unsigned int)Data[0] << 8) | Data[1]); //combine the two values
	return read_heading; // the heading returned in degrees between 0 and 3599
}

//-----------------------------------------------------------------------------
void set_servo_PWM(void)
{
	hi
}

//-------------------------------------------------------------------------------
// new feature - read value, and then start a new ping
int read_ranger(void)
{
	unsigned char addr = 0xE0; // the address of the sensor, 0xC0 for the compass
	unsigned char Data[2]; // Data is an array with a length of 2
	unsigned int range = 0; // the range
	i2c_read_data(addr, 2, Data, 2); // read two byte, starting at reg 2
	range =(((unsigned int)Data[0] << 8) | Data[1]); //combine the two values	
	Data[0] = 0x51 ; // write 0x51 to reg 0 of the ranger:
	i2c_write_data(addr, 0, Data, 1) ; // write one byte of data to reg 0 at addr
	return range;
}

//-----------------------------------------------------------------------------
void set_drive_PWM(void)
{
	hi
}

//-----------------------------------------------------------------------------
// function which allow operator to pick desired heading
int pick_heading(void)
{
	hi
}