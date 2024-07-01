/*
 * File:   main.c
 */

#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

static void init_config(void) {
    LED1 = OFF;
    LED1_DDR = 0;
    SW1_DDR = 1;
}

void main(void) {
    init_config();

    while (1) {
        if (SW1 == PRESSED)
        {
            LED1 = ON;
        }
        else
        {
            LED1 = OFF;
        }
    }
    return;
}
