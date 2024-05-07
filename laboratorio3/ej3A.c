#include <stdio.h>
#define SIZE 5

int findLargestSquare(int mainMatrix[][SIZE], int zeroMatrix[][SIZE]) {
    int i = 0;
    int j = 0;
    int sizeMatrix = 0;

    /*
    Tras imprimir la matriz original, se inspecciona cada elemento de la matriz original, y, si se encuentra
    un 1, busca un 1 a su izquierda o a su derecha, y si cumple esta condición, se le suma una unidad al counter. 
    En caso contrario, counter adquiere un valor de cero (se resetea cuando se encuentra un cero).

    Nótese que, antes de salir del ciclo for de j, al elemento [i][j] la matriz auxiliar zeroMatrix se le asigna
    el valor adquirido por counter.
    */

    printf("La matriz escaneada es:\n");

    for (i=0; i<SIZE; i++){
        int counter = 0;
        for (j=0; j<SIZE; j++){
            printf("%d", mainMatrix[i][j]);
            if ((j<SIZE && mainMatrix[i][j]==1) && (mainMatrix[i][j+1]==1 || mainMatrix[i][j-1]==1)){
                counter ++;
            }
            else {
                counter = 0;
            }
            zeroMatrix[i][j] = counter;
        }
        printf("\n");
    }

    printf("La matriz auxiliar es:\n");

    for (i=0; i<SIZE; i++){
        for (j=0; j<SIZE; j++){
            printf("%d", zeroMatrix[i][j]);
        }
        printf("\n");
    }    

    /*
    Este es el segmento más crítico de la implementación. Se inspecciona cada elemento 
    de la matriz auxiliar zeroMatrix, el cual contiene la información de las coordenadas 
    del tamaño de la fila de 1s sin interrumpir más grande de cada fila.
    Si se encuentra un elemento de tamaño x, se busca x cantidad de elementos contiguos 
    mayores o iguales que x en la columna, y retorna un x como resultado.
    */

    for (i=0; i<SIZE; i++){
        for (j=0; j<SIZE; j++){
            if ((zeroMatrix[i][j]==SIZE && zeroMatrix[i+1][j]>=SIZE && zeroMatrix[i+2][j]>=SIZE && zeroMatrix[i+3][j]>=SIZE && zeroMatrix[i+4][j]>=SIZE) && (zeroMatrix[i][j]>sizeMatrix)){
                sizeMatrix = SIZE;
                
            }
            else if ((zeroMatrix[i][j]==SIZE-1 && zeroMatrix[i+1][j]>=SIZE-1 && zeroMatrix[i+2][j]>=SIZE-1 && zeroMatrix[i+3][j]>=SIZE-1) && (zeroMatrix[i][j]>sizeMatrix)){
                sizeMatrix = SIZE-1;
                
            }
            else if ((zeroMatrix[i][j]==SIZE-2 && zeroMatrix[i+1][j]>=SIZE-2 && zeroMatrix[i+2][j]>=SIZE-2) && (zeroMatrix[i][j]>sizeMatrix)){
                sizeMatrix = SIZE-2;
                
            }
            else if ((zeroMatrix[i][j]==SIZE-3 && zeroMatrix[i+1][j]>=SIZE-3) && (zeroMatrix[i][j]>sizeMatrix)){
                sizeMatrix = SIZE-3;
                
            }
            else if ((zeroMatrix[i][j]==SIZE-4) && (zeroMatrix[i][j]>sizeMatrix)){
                sizeMatrix = SIZE-4;
                
            }
        }    
    }

    return sizeMatrix;
}

int main() {
    int mainMatrix[SIZE][SIZE] = {
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1}
    };

    int zeroMatrix[SIZE][SIZE] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int largestSquareSize = findLargestSquare(mainMatrix, zeroMatrix);
    printf("El tamaño del cuadrado más grande de unos es: %d x %d\n", largestSquareSize, largestSquareSize);

    return 0;
}