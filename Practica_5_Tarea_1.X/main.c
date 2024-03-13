/*
 * OSCAR IVAN MORENO GUTIERREZ
 * Practica 5 Tarea 1
*/
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/timer/tmr1.h"
#include "funciones.h"

/*
    Main application
*/
static bool queEfecto= true;
int main(void)
{
    SYSTEM_Initialize();
    
    iniciaLEDS();
    while(1)
    {
        
        
        if(SWITCH2_GetValue() == 0){
            // debounce
            __delay_ms(10);
            if(SWITCH2_GetValue() ==1){
                LED2_Toggle();
            }
        }
        
        if(SWITCH1_GetValue() == 0){
            // debounce
            __delay_ms(10);
            if(SWITCH1_GetValue() ==1){
                queEfecto = !queEfecto;
                iniciaLEDS();
            }
        }
    }    
}

void __attribute__ ((weak)) TMR1_TimeoutCallback( void )
{ 
    if (queEfecto){
        efecto1();
    }
    else{
        efecto2bis();
    }
} 