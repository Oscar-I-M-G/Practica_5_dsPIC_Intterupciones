/*
 * OSCAR IVAN MORENO GUTIERREZ
 * Practica 5 Tarea 2
*/
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/timer/tmr1.h"
#include "funciones.h"
static bool queEfecto= true;

// Interrupcion del switch cambia que !efecto prioridad mayor que el timer1
void __attribute__ ((weak)) SWITCH1_CallBack(void)
{
        
        queEfecto = !queEfecto;
                iniciaLEDS();

}
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    
    iniciaLEDS();
    while(1)
    {   

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