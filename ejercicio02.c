#include <stdio.h>
#include "operacion2.h"

int main (){
    float escalar;
    float arreglo[]={5,4,3,2,1};

    printf("Escriba un numero escalar:\n ");
    scanf("%f", &escalar);
    arregloEscalar(arreglo, 5, escalar);
    for (int i=0; i<5; i++){
        printf ("arreglo sumado al valor numero:%d del arreglo: %f\n", i, arreglo[i]);
    }

    return  0;
}

