#include <stdio.h>

/*
La función findMin recibe como argumentos al arreglo
y al tamaño del arreglo, busca de manera lineal el
mínimo valor del arreglo y lo retorna.
*/

int findMin (int array[], int sizeArray){
    int i = 0;
    int minimum = 0;
    for (i=0;i<sizeArray;i++){
        if (array[i] < array[i+1]){
            array[i+1] = array[i];
        }
    minimum = array[sizeArray-1];
    }
    return minimum;
}

/*
La función findMax recibe como argumentos al arreglo
y al tamaño del arreglo, busca de manera lineal el
máximo valor del arreglo y lo retorna.
*/

int findMax (int array[], int sizeArray){
    int i = 0;
    int maximum = 0;
    for (i=0;i<sizeArray;i++){
        if (array[i] > array[i+1]){
            array[i+1] = array[i];
        }
    }
    maximum = array[sizeArray-1];
    return maximum;
}

int main (){

    // Inicialización de variables

    int arreglo[] = {21, 24, 65, 3, 56, 12, 25, 15};
    int tamanoArreglo = sizeof(arreglo)/sizeof(arreglo[0]);
    int i = 0;

    // Impresión del arreglo analizado

    printf ("El arreglo es:\n");
    for (i=0; i<tamanoArreglo; i++){
        printf ("%d ", arreglo[i]);
    }
    printf ("\n");
    printf ("Tamano del arreglo: %d\n", tamanoArreglo);

    // Ejecución de la función findMin

    int minimo = findMin (arreglo, tamanoArreglo);
    printf ("El valor minimo del arreglo es: %d\n", minimo);

    // Ejecución de la función findMax

    int arregloDos[] = {21, 24, 65, 3, 56, 12, 25, 15};

    int maximo = findMax (arregloDos, tamanoArreglo);
    printf ("El valor maximo del arreglo es: %d\n", maximo);

    return 0;
}