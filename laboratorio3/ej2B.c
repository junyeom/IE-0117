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
    int n = 0;
    printf("Digite un numero entero positivo: ");
    scanf("%d", &n);
    int fact=factorial(n);
    printf("El factorial de %d es %d \n", n, fact);
    return 0;
}