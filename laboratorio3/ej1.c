#include <stdio.h>

/*
Declaración de variables
*/

int i = 0;
int j = 0;
int numero = 0;

int main(){
    /*La variable numero va almacenando la suma de cada iteración.
    Se le debe sumar un 1 a i para identificar correctamente los números triangulares 
    porque la iteración propiamente va de 0 a 99*/

    for (i=0;i<100;i++){
        numero += i;
        printf("El numero triangular %d es %d\n", i+1, numero);
    }

    return 0;
}