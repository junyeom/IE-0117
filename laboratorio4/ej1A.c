#include <stdio.h>

int searchValue (int array[], int arraySize, int value){
    int i = 0;
    for (i=0; i<arraySize; i++){
        if (array[i] == value){
            return i;
        }
    }
}

int main(){
    int arreglo[] = {2,4,6,23,56,79};
    int tamanoArreglo = sizeof(arreglo)/sizeof(arreglo[0]);

    int valor = 0;
    printf("Ingrese un valor: ");
    scanf("%d", &valor);
    int posicion = searchValue (arreglo, tamanoArreglo, valor);
    if (0<= posicion && posicion < tamanoArreglo){
        printf ("El valor ingresado %d se encuentra en la posicion %d\n", valor, posicion);
    }
    else{
        printf ("El valor ingresado no se encuentra en el arreglo\n");
    }
    return 0;
}