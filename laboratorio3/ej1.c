#include <stdio.h>

int i = 0;
int j = 0;
int numero = 0;

int main(){
    
    for (i=0;i<100;i++){
        numero += i;
        printf("El numero triangular de orden %d es %d\n", i, numero);
    }

    return 0;
}