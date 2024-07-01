/*
 * File:   main.c
 * Author: saisa
 *
 * Created on 1 March, 2024, 9:29 PM
 */


#include <xc.h>
#include "main.h"
#pragma config WDTE = OFF

void init_config(void){
    LED_ARRAY2_DDR = 0x00;
}
void main(void) {
    init_config();
    while(1){
        LED_ARRAY2 = 0xFF;
        for (unsigned int wait = 50000; wait--;);
        LED_ARRAY2 = 0x00;
        for (unsigned int wait = 50000; wait--;);
        
   }
}
