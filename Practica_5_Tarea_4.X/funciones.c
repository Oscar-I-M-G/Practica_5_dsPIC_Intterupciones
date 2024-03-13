#include <p33CH512MP508.h>

void iniciarLEDS(void){
    _LATE0 = 1;
    _LATE1 = 0;
}
void efecto1(void){
    _LATE0 = !_LATE0;
    _LATE1 = !_LATE1;
}

void efecto2(void){
    static uint8_t contador = 0;
    switch (contador){
        case 0:
            // asigna 1 al regristro rE0 sin afectar los demas bits
            //LATE |= (1 << 0);
            _LATE0 = 1;
            contador ++;
            break;
        case 1:
            // asigna 1 al regristro rE1 sin afectar los demas bits
            //LATE |= (1 << 1);
            _LATE1 = 1;
            contador ++;
            break;
        case 2:
            // asigna 0 al regristro rE1 sin afectar los demas bits
            //LATE &=~ (1 << 1);
            _LATE1 = 0;
            contador ++;
            break;
        default:
            // asigna 0 al regristro rE0 sin afectar los demas bits
            //LATE &=~(1 << 0);
            _LATE0 = 0;
            contador = 0;
            break;
    }
}
