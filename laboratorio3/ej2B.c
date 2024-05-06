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
    En este caso, se declara una variable n, y se le solicita el valor al usuario
    mediante scanf, por lo que tampoco son necesarios argc y argv.
    Se le pasa el valor guardado a la función para que calcule su factorial.
    */
    int n = 0;
    printf("Digite un numero entero positivo: ");
    scanf("%d", &n);
    int fact=factorial(n);
    printf("El factorial de %d es %d \n", n, fact);
    return 0;
}