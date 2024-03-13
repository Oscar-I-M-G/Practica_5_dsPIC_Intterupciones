/* 
 * File:   funciones.h
 * Author: oimg
 *
 * Created on March 8, 2024, 9:43 PM
 */

#ifndef FUNCIONES_H
#define	FUNCIONES_H
#define FCY (4000000) //FCY = FOSC/2 (no PLL))
#include <libpic30.h>

void iniciaLEDS(void);
void apagaLEDS(void);
void efecto1(void);
void efecto2bis(void);

void efecto2(void);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* FUNCIONES_H */

