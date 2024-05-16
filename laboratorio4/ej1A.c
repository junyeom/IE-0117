#include <stdio.h>

/*
La función searchValue recibe el arreglo, el tamaño del arreglo
y el valor ingresado por el usuario. Mediante una búsqueda lineal,
la función busca dicho valor en el arreglo, y si lo encuentra
retorna la posición en donde se encuentra el valor.

Si termina el ciclo for sin retornar una posición, la función
retorna un valor negativo, el cual equivale a decir que no existe
una posición en el arreglo en donde se encuentre el valor.
*/

int searchValue (int array[], int arraySize, int value){
    int i = 0;
    for (i=0; i<arraySize; i++){
        if (array[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){

    // Inicialización de variables

    int arreglo[] = {2,4,6,23,56,79};
    int tamanoArreglo = sizeof(arreglo)/sizeof(arreglo[0]);
    int valor = 0;

    // Scan del valor ingresado

    printf("Ingrese un valor: ");
    scanf("%d", &valor);

    // Lógica del resultado de la búsqueda lineal
    
    int posicion = searchValue (arreglo, tamanoArreglo, valor);
    if (0<= posicion && posicion < tamanoArreglo){
        printf ("El valor ingresado %d se encuentra en la posicion %d\n", valor, posicion);
    }
    else{
        printf ("El valor ingresado no se encuentra en el arreglo\n");
    }
    return 0;
}