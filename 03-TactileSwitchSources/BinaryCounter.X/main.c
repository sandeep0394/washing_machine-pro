/*
 * File:   main.c
 */

#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

static void init_config(void) {
    LED_ARRAY1 = OFF;
    LED_ARRAY1_DDR = 0x00;
    
    init_digital_keypad();
}

void main(void) {
    unsigned char key;
    unsigned char count = 0;
    unsigned long i;
    
    init_config();

    while (1) {
        key = read_digital_keypad(LEVEL);
     
        LED_ARRAY1 = count;
        
        if (key == SW1)
        {
            if (count == 255)
            {
                count = 0;
            }
            
            count++;
        }
        
        for (i = 100000; i--; );
    }
    return;
}
