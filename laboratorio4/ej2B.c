#include <stdio.h>

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

    int i;
    int array[] = {21, 24, 65, 3, 56, 12, 25, 15};
    int tamanoArreglo = sizeof(array)/sizeof(array[0]);
    printf ("Tamano del arreglo: %d\n", tamanoArreglo);
    
    printf("Arreglo original: ");
    for (i=0; i<tamanoArreglo; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    int minimum, maximum;
    findMinMax(array, &minimum, &maximum, tamanoArreglo);

    printf ("El valor minimo es %d, y el valor maximo es %d\n", minimum, maximum);
    return 0;
}