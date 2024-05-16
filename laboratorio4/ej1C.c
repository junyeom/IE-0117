#include <stdio.h>

/*
La función binSearch de este programa posee una lógica de
implementación muy similar al del programa ej1B.c. La diferencia
es que en este programa se ha utilizado recursividad.

El único cambio que se requiere es que, en lugar de redefinir
el "piso" y el "techo" del arreglo explícitamente, se vuelve a
llamar a la función, y se le pasa el nuevo "piso" o el nuevo
"techo" a través de argumentos.

Si el valor ingresado es mayor que el valor en la mitad del arreglo,
se pasa como argumento la redefinición del "piso" (el "piso" sube
porque la mitad inferior es irrelevante). Si el valor ingresado
es menor que el valor en la mitad del arreglo, se pasa como argumento
la redefinición del "techo" (el "techo" baja porque la mitad superior
es irrelevante).
*/

int binSearch (int array[], int floor, int ceiling, int value){
    
    while (1){
        
        int middle = floor + ((ceiling - floor) / 2);
        
        if (array[middle] == value){
            return middle;
        }

        if (value > array[middle]){
            return binSearch (array, middle + 1, ceiling, value);
        }

        if (value < array[middle]){
            return binSearch (array, floor, middle - 1, value);
        }

        if (floor > ceiling){
            break;
        }
    }
    return -1;
}

int main(){

    // Inicialización de variables

    int arreglo[]={2,4,6,23,56,79};
    int tamanoArreglo=sizeof(arreglo)/sizeof(arreglo[0]);

    int piso = 0;
    int techo = tamanoArreglo - 1;
    int valor = 0;
    int i;

    // Scan del valor ingresado

    printf("Ingrese un valor: ");
    scanf("%d", &valor);

    // Impresión del arreglo analizado

    printf("El arreglo es:\n");
    for (i=0;i<tamanoArreglo;i++){
        printf("%d (%d) ",arreglo[i], i);
    }
    printf("\n");

    // Lógica del resultado de la búsqueda binaria

    int posicion = binSearch(arreglo, piso, techo, valor);
    if (posicion >= 0 && posicion < tamanoArreglo){
        printf("El valor ingresado se encuentra en la posicion %d\n", posicion);
    }
    else {
        printf("El valor ingresado no se encuentra en el arreglo\n");
    }

    return 0;
}