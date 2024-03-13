/*
 * OSCAR IVAN MORENO GUTIERREZ
 * PRACTICA 5 TAREA 3
*/
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/timer/tmr1.h"
#include "funciones.h"
static bool queEfecto= true;
static uint8_t counter = 0;
static uint8_t solidCounter = 0;

// Interrupcion del switch cambia que !efecto prioridad mayor que el timer1
void SWITCH1_CallBack(void)
{
    queEfecto = !queEfecto;
    iniciarLEDS();
}
void TMR1_TimeoutCallback( void )
{ 
    //checamos si el solidCounter llega a cero
    if (solidCounter == 0) {
        if (queEfecto)
            efecto1();
        else
            efecto2();
        solidCounter = counter;        
    }
    // si counter esta arriba de 0 decrementamos el SolidCounter
    else if (counter > 0){
        solidCounter --;
    }
}
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    iniciarLEDS();
    while(1)
    {
        if(SWITCH2_GetValue() == 0){
            // un debounce 
            __delay_ms(100);
            
            if(SWITCH2_GetValue() == 1){
                if(counter == 3){
                    counter = 0;
                }else{
                    counter ++;
                }
                // cada pulsasion del buton reasiganamos solidCounter
                solidCounter = counter;              
            }   
        }
    }    
}