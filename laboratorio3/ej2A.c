#include <stdio.h>

int factorial (int n){
    int i = 1;
    while (n>1){
        i = i*n;
        n = n-1;
    }
    return i;
}

int main (){
    /*
    Se han eliminado argc y argv porque el main ya le pasó argumentos a factorial
    y en este caso no es necesario que el usuario ingrese argumentos por la línea de comando.
    */
    int fac4=factorial(4);
    int fac5=factorial(5);
    printf("4! = %d \n5! = %d \n", fac4, fac5);
    return 0;
}