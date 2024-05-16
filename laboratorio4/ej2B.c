#include <stdio.h>

/*
La función findMinMax recibe cuatro parámetros: el arreglo,
el puntero del valor mínimo, el puntero del valor máximo
y el tamaño del arreglo.

Inicialmente, el puntero del valor mínimo apunta hacia el
primer elemento del arreglo, y el puntero del valor máximo
apunta hacia el último elemento del arreglo.

Utilizando un ciclo for, se desreferencia el valor guardado
en el puntero del valor mínimo, y se va sustituyendo por
valores menores que el anterior hasta encontrar el menor
valor. Se sigue una lógica similar para encontrar el mayor valor.

Nótese que en ningún momento es necesario guardar el valor
en una variable, porque se trabaja directamente con los punteros.
Además, los punteros permiten que una función "retorne" varios valores
a la vez, aunque dicha función sea de tipo void.
*/

void findMinMax (int array[], int *minimum, int *maximum, int size){
    int i;
    *minimum = array[0];
    *maximum = array[size];
    for (i=0; i<size; i++){
        if (array[i]<*minimum){
            *minimum = array[i];
        }
    }

    for (i=0; i<size; i++){
        if (array[i]>*maximum){
            *maximum = array[i];
        }
    }
}

int main (){

    // Inicialización de variables

    int i;
    int array[] = {21, 24, 65, 3, 56, 12, 25, 15};
    int tamanoArreglo = sizeof(array)/sizeof(array[0]);
    int minimum, maximum;

    // Impresión del arreglo
    
    printf("Arreglo: ");
    for (i=0; i<tamanoArreglo; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ejecución de la función

    findMinMax(array, &minimum, &maximum, tamanoArreglo);

    printf ("El valor minimo es %d, y el valor maximo es %d\n", minimum, maximum);
    return 0;
}