#include <stdio.h>
//uso de punteros para operaciones de una calculadora//
void sumar (float *n1, float *n2,float *suma){
    *suma= *n1 + *n2;
}

void restar (float *n1, float *n2,float *resta){
    *resta= *n1 - *n2;
}
void multiplicar (float *n1, float *n2,float *multiplicacion){
    *multiplicacion= *n1 * *n2;
}
void dividir (float *n1, float *n2,float *division){
    *division= *n1 / *n2;
}

