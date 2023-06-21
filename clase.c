#include <stdio.h>
#include "operaciones.h"

void arregloEscalar (float *arreglo, int medida, float escalar){
    for (size_t i =0; i < medida; i++){
        *arreglo = *arreglo +escalar;
        arreglo++;
    }
}

int main (){
    float num1, num2;
    float suma, resta, multiplicacion, division;

    printf("Favor ingresar el primer numero:\n");
    scanf ("%f", &num1);
    printf("Favor ingresar el segundo numero:\n");
    scanf ("%f", &num2);

    sumar (&num1, &num2, &suma );
    restar (&num1, &num2, &resta);
    multiplicar (&num1, &num2, &multiplicacion);
    dividir (&num1, &num2, &division);

    printf("La suma es %f\n", suma);
    printf("La resta es %f\n", resta);
    printf("La multiplicacion es %f\n", multiplicacion);
    printf("La division es %.2f\n", division);

    return  0;
}
