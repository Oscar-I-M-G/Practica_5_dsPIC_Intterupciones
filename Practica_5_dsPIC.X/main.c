/*
 * OSCAR IVAN MORENO GUTIERREZ
 * Practica 5 dsPIC
*/
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/timer/tmr1.h"
#define FCY (4000000) //FCY = FOSC/2 (no PLL))
#include <libpic30.h>
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    TMR1_Initialize();
    while(1)
    {
        if(SWITCH2_GetValue() == 0){
            // debounce
            __delay_ms(10);
            if(SWITCH2_GetValue() ==1){
                LED2_Toggle();
            }
        }
    }    
}

void __attribute__ ((weak)) TMR1_TimeoutCallback( void )
{ 
    LED1_Toggle();
} 