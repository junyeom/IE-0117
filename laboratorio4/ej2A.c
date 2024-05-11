#include <stdio.h>

int findMin (int array[], int sizeArray){
    int i = 0;
    int minimum = 0;
    for (i=0;i<sizeArray;i++){
        if (array[i] < array[i+1]){
            array[i+1] = array[i];
        }
        printf ("%d ", array [i]);
    minimum = array[sizeArray-1];
    }
    return minimum;
}

int findMax (int array[], int sizeArray){
    int i = 0;
    int maximum = 0;
    for (i=0;i<sizeArray;i++){
        if (array[i] > array[i+1]){
            array[i+1] = array[i];
        }
        printf ("%d ", array [i]);
    }
    maximum = array[sizeArray-1];
    return maximum;
}

int main (){

    int arreglo[] = {21, 24, 65, 3, 56, 12, 25, 15};
    int tamanoArreglo = sizeof(arreglo)/sizeof(arreglo[0]);
    int i = 0;
    for (i=0; i<tamanoArreglo; i++){
        printf ("%d ", arreglo[i]);
    }
    printf ("\n");
    printf ("Tamano del arreglo: %d\n", tamanoArreglo);

    int minimo = findMin (arreglo, tamanoArreglo);
    printf ("El valor minimo del arreglo es: %d\n", minimo);

    int arregloDos[] = {21, 24, 65, 3, 56, 12, 25, 15};

    int maximo = findMax (arregloDos, tamanoArreglo);
    printf ("El valor maximo del arreglo es: %d\n", maximo);

    return 0;
}