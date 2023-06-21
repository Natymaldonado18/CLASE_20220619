#include <stdio.h>
#include <string.h>

int comparacion (char *cadena1, char *cadena2){
    while (*cadena1 && *cadena2){
        if (*cadena1!=*cadena2){
            return 0;
        }
        cadena1++;
        cadena2++;
    }
    if (*cadena1=='\0' && *cadena2=='\0'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char cadena1[100];
    char cadena2[100];

    printf ("Ingresar la primera cadena: \n");
    fgets (cadena1, sizeof(cadena1), stdin);
    printf ("Ingresar la segunda cadena: \n");
    fgets (cadena2, sizeof(cadena2), stdin);

    if ((comparacion) (cadena1, cadena2)){
    printf ("Las cadenas son iguales");
    }else {
        printf ("las cadenas no coinden");
    }
return 0;
}