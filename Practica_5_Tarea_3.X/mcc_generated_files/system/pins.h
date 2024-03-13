/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @skipline @version   Firmware Driver Version 1.0.2
 *
 * @skipline @version   PLIB Version 1.3.0
 *
 * @skipline  Device : dsPIC33CH512MP508
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE0 GPIO Pin which has a custom name of LED1 to High
 * @pre      The RE0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED1_SetHigh()          (_LATE0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE0 GPIO Pin which has a custom name of LED1 to Low
 * @pre      The RE0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED1_SetLow()           (_LATE0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE0 GPIO Pin which has a custom name of LED1
 * @pre      The RE0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED1_Toggle()           (_LATE0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE0 GPIO Pin which has a custom name of LED1
 * @param    none
 * @return   none  
 */
#define LED1_GetValue()         _RE0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE0 GPIO Pin which has a custom name of LED1 as Input
 * @param    none
 * @return   none  
 */
#define LED1_SetDigitalInput()  (_TRISE0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE0 GPIO Pin which has a custom name of LED1 as Output
 * @param    none
 * @return   none  
 */
#define LED1_SetDigitalOutput() (_TRISE0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE1 GPIO Pin which has a custom name of LED2 to High
 * @pre      The RE1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED2_SetHigh()          (_LATE1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE1 GPIO Pin which has a custom name of LED2 to Low
 * @pre      The RE1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED2_SetLow()           (_LATE1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE1 GPIO Pin which has a custom name of LED2
 * @pre      The RE1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED2_Toggle()           (_LATE1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE1 GPIO Pin which has a custom name of LED2
 * @param    none
 * @return   none  
 */
#define LED2_GetValue()         _RE1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE1 GPIO Pin which has a custom name of LED2 as Input
 * @param    none
 * @return   none  
 */
#define LED2_SetDigitalInput()  (_TRISE1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE1 GPIO Pin which has a custom name of LED2 as Output
 * @param    none
 * @return   none  
 */
#define LED2_SetDigitalOutput() (_TRISE1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE7 GPIO Pin which has a custom name of SWITCH1 to High
 * @pre      The RE7 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define SWITCH1_SetHigh()          (_LATE7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE7 GPIO Pin which has a custom name of SWITCH1 to Low
 * @pre      The RE7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define SWITCH1_SetLow()           (_LATE7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE7 GPIO Pin which has a custom name of SWITCH1
 * @pre      The RE7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define SWITCH1_Toggle()           (_LATE7 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE7 GPIO Pin which has a custom name of SWITCH1
 * @param    none
 * @return   none  
 */
#define SWITCH1_GetValue()         _RE7

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE7 GPIO Pin which has a custom name of SWITCH1 as Input
 * @param    none
 * @return   none  
 */
#define SWITCH1_SetDigitalInput()  (_TRISE7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE7 GPIO Pin which has a custom name of SWITCH1 as Output
 * @param    none
 * @return   none  
 */
#define SWITCH1_SetDigitalOutput() (_TRISE7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE8 GPIO Pin which has a custom name of SWITCH2 to High
 * @pre      The RE8 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define SWITCH2_SetHigh()          (_LATE8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE8 GPIO Pin which has a custom name of SWITCH2 to Low
 * @pre      The RE8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define SWITCH2_SetLow()           (_LATE8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE8 GPIO Pin which has a custom name of SWITCH2
 * @pre      The RE8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define SWITCH2_Toggle()           (_LATE8 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE8 GPIO Pin which has a custom name of SWITCH2
 * @param    none
 * @return   none  
 */
#define SWITCH2_GetValue()         _RE8

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE8 GPIO Pin which has a custom name of SWITCH2 as Input
 * @param    none
 * @return   none  
 */
#define SWITCH2_SetDigitalInput()  (_TRISE8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE8 GPIO Pin which has a custom name of SWITCH2 as Output
 * @param    none
 * @return   none  
 */
#define SWITCH2_SetDigitalOutput() (_TRISE8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @param    none
 * @return   none  
 */
void PINS_Initialize(void);

/**
 * @ingroup  pinsdriver
 * @brief    This function is callback for SWITCH1 Pin
 * @param    none
 * @return   none   
 */
void SWITCH1_CallBack(void);

/**
 * @ingroup  pinsdriver
 * @brief    This function is callback for SWITCH2 Pin
 * @param    none
 * @return   none   
 */
void SWITCH2_CallBack(void);


/**
 * @ingroup    pinsdriver
 * @brief      This function assigns a function pointer with a callback address
 * @param[in]  InterruptHandler - Address of the callback function 
 * @return     none  
 */
void SWITCH1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup    pinsdriver
 * @brief      This function assigns a function pointer with a callback address
 * @param[in]  InterruptHandler - Address of the callback function 
 * @return     none  
 */
void SWITCH2_SetInterruptHandler(void (* InterruptHandler)(void));


#endif
