#include <stdio.h>
#include "operacion3.h"

int main (){
    float escalar;
    float arreglo[]={5,0,0,0,0};
    int medida=sizeof(arreglo)/sizeof(float);
    
    printf("El 5 se encuentra en la posición 0:\n ");
    printf("Escriba un numero escalar para sumar:\n ");
    scanf("%f", &escalar);
    arregloEscalar(arreglo, medida, escalar);
    for (int i=0; i<medida; i++){
        printf ("En la posicion:%d del arreglo, la suma es: %f\n", i, arreglo[i]);
    }

    return  0;
}
