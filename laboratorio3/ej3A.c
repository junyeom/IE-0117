#include <stdio.h>
#define SIZE 5

int findLargestSquare(int mainMatrix[][SIZE], int zeroMatrix[][SIZE]) {
    int i = 0;
    int j = 0;
    int largestRowMatrix [SIZE] = {0, 0, 0, 0, 0};
    int sizeMatrix = 0;

    printf("La matriz escaneada es:\n");

    for (i=0; i<SIZE; i++){
        for (j=0; j<SIZE; j++){
            printf("%d", mainMatrix[i][j]);
            if ((j<SIZE && mainMatrix[i][j]==1) && (mainMatrix[i][j+1]==1 || mainMatrix[i][j-1]==1)){
                largestRowMatrix[i] ++;
            }
            else {
                largestRowMatrix[i] = 0;
            }
            zeroMatrix[i][j] = largestRowMatrix[i];
        }
        printf("\n");
    }

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
    printf("El tamaño del cuadrado más grande de unos es: %d\n", largestSquareSize);

    return 0;
}