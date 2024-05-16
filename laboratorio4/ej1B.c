#include <stdio.h>

/*
La función binSearch recibe cuatro variables: el arreglo,
el "piso" del arreglo, el "techo" del arreglo y el valor
ingresado por el usuario.

Nótese que el ciclo while correrá hasta que se le imponga 
un break, porque se le ha pasado una condición que siempre 
es verdadera, es decir, 1.

Si se encuentra el valor ingresado por el usuario en la mitad
del arreglo, se termina la ejecución de la función y retorna
la posición (caso base). 

Si el valor ingresado es mayor que el valor en la mitad, 
la celda inmediatamente superior a la mitad se convierte en
el nuevo "piso". Si el valor ingresado es menor que el valor
en la mitad, la celta inmediatamente inferior a la mitad
se convierte en el nuevo "techo". Esto ocurre hasta que la
función retorne la posición del valor, o hasta que se cumpla 
la condición de break.
*/

int binSearch (int array[], int floor, int ceiling, int value){
    
    while (1){
        
        int middle = floor + ((ceiling - floor) / 2);
        
        if (array[middle] == value){
            return middle;
        }

        if (value > array[middle]){
            floor = middle + 1;
        }

        if (value < array[middle]){
            ceiling = middle - 1;
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
    int i=0;

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