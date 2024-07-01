/*
 * File:   main.c
 * Author: Emertxe
 *
 * Created on March 4, 2022, 8:47 PM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
void init_config(void)
{
	// SEt PORTB as Output port
	LED_ARRAY_DDR = 0;
	
	// Keep all LEDs OFF 
	LED_ARRAY  = 0x00;
	
}
void main()
{
	unsigned long int delay; // int = 2bytes 
	init_config();
	
	while(1)
	{
		// Turning ON LEDS
		LED_ARRAY  = 0x01; // 0000 0001
        
		
		// Delay
		for(delay = 0; delay < 50000; delay++);
		
		// Turning OFF LEDS 
		LED_ARRAY  = 0x00; // 1111 0000
		
		// Delay
		for(delay = 0; delay < 50000; delay++);
	}
}
