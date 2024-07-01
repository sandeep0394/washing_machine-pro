/*
 * File:   main.c
 */

#include <xc.h>
#include "clcd.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)

static void init_config(void) {
    init_clcd();
}

void main(void) {
    init_config();

    while (1) {
        clcd_print("Hello", LINE1(0));
        clcd_print("World", LINE2(0));
        clcd_print("World", LINE3(0));
        clcd_print("World", LINE4(0));
    }
    return;
}
