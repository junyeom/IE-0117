#include <stdio.h>

int binSearch (int array[], int begin, int end, int value){
    
}

int main(){
    int arreglo[]={2,4,6,23,56,79};
    int tamanoArreglo=sizeof(arreglo)/sizeof(arreglo[0]);
    int inicio = 0;
    int fin = tamanoArreglo - 1;
    int valor = 0;
    printf("Ingrese un valor: ");
    scanf("%d", &valor);
    int posicion = 0;
    if (binSearch(arreglo, inicio, fin, valor)){
        printf("El valor ingresado se encuentra en la posicion %d", posicion);
    }
    else{
        printf("El valor ingresado no se encuentra en el arreglo");
    }

    return 0;
}