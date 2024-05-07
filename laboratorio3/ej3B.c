#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
A diferencia del código de ej3A.c, en donde se definió SIZE 
en la etapa de preprocesamiento, en este caso se desea que 
el usuario ingrese el tamaño de la matriz. Para esto, se ha
definido una variable global n.
*/

int n = 0;

/*
La lógica detrás de la función findLargestSquare se conserva.
Lo que ha cambiado es el nombre del argumento.
*/

int findLargestSquare(int mainMatrix[][n], int zeroMatrix[][n]) {
    int i = 0;
    int j = 0;
    int sizeMatrix = 0;

    printf("La matriz escaneada es:\n");

    for (i=0; i<n; i++){
        int counter = 0;
        for (j=0; j<n; j++){
            printf("%d", mainMatrix[i][j]);
            if ((j<n && mainMatrix[i][j]==1) && (mainMatrix[i][j+1]==1 || mainMatrix[i][j-1]==1)){
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

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%d", zeroMatrix[i][j]);
        }
        printf("\n");
    }

    /*
    Nuevamente, este es el segmento más crítico de la implementación.
    Siguiendo una lógica similar al caso de ej3A.c, se construyen todos los escenarios
    en donde x elementos contiguos de una columna poseen un valor mayor o igual que x.
    */

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (((zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i+7][j]>=n && zeroMatrix[i+8][j]>=n && zeroMatrix[i+9][j]>=n) 
            
            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i+7][j]>=n && zeroMatrix[i+8][j]>=n && zeroMatrix[i-1][j]>=n) 
            
            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i+7][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 
            
            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i+4][j]>=n && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i+3][j]>=n && zeroMatrix[i-6][j]>=n && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i+2][j]>=n && zeroMatrix[i-7][j]>=n && zeroMatrix[i-6][j]>=n && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n && zeroMatrix[i+1][j]>=n && zeroMatrix[i-8][j]>=n && zeroMatrix[i-7][j]>=n && zeroMatrix[i-6][j]>=n && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n && zeroMatrix[i-9][j]>=n && zeroMatrix[i-8][j]>=n && zeroMatrix[i-7][j]>=n && zeroMatrix[i-6][j]>=n && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n)) 

            && (zeroMatrix[i][j]>sizeMatrix)){
                sizeMatrix = n;
            }
            
            else if (((zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i+3][j]>=n-1 && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i+7][j]>=n && zeroMatrix[i+8][j]>=n) 
            
            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i+3][j]>=n-1 && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i+7][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i+3][j]>=n-1 && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i+6][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i+3][j]>=n-1 && zeroMatrix[i+4][j]>=n && zeroMatrix[i+5][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i+3][j]>=n-1 && zeroMatrix[i+4][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i+3][j]>=n-1 && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i+2][j]>=n-1 && zeroMatrix[i-6][j]>=n-1 && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i+1][j]>=n-1 && zeroMatrix[i-7][j]>=n-1 && zeroMatrix[i-6][j]>=n-1 && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i-8][j]>=n-1 && zeroMatrix[i-7][j]>=n-1 && zeroMatrix[i-6][j]>=n-1 && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 

            || (zeroMatrix[i][j]==n-1 && zeroMatrix[i-8][j]>=n-1 && zeroMatrix[i-7][j]>=n-1 && zeroMatrix[i-6][j]>=n-1 && zeroMatrix[i-5][j]>=n && zeroMatrix[i-4][j]>=n && zeroMatrix[i-3][j]>=n && zeroMatrix[i-2][j]>=n && zeroMatrix[i-1][j]>=n) 
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-1; 
            }

            else if (((zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i+2][j]>=n-2 && zeroMatrix[i+3][j]>=n-2 && zeroMatrix[i+4][j]>=n-2 && zeroMatrix[i+5][j]>=n-2 && zeroMatrix[i+6][j]>=n-2 && zeroMatrix[i+7][j]>=n-2) 
            
            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i+2][j]>=n-2 && zeroMatrix[i+3][j]>=n-2 && zeroMatrix[i+4][j]>=n-2 && zeroMatrix[i+5][j]>=n-2 && zeroMatrix[i+6][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i+2][j]>=n-2 && zeroMatrix[i+3][j]>=n-2 && zeroMatrix[i+4][j]>=n-2 && zeroMatrix[i+5][j]>=n-2 && zeroMatrix[i-2][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i+2][j]>=n-2 && zeroMatrix[i+3][j]>=n-2 && zeroMatrix[i+4][j]>=n-2 && zeroMatrix[i-3][j]>=n-2 && zeroMatrix[i-2][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i+2][j]>=n-2 && zeroMatrix[i+3][j]>=n-2 && zeroMatrix[i-4][j]>=n-2 && zeroMatrix[i-3][j]>=n-2 && zeroMatrix[i-2][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i+2][j]>=n-2 && zeroMatrix[i-5][j]>=n-2 && zeroMatrix[i-4][j]>=n-2 && zeroMatrix[i-3][j]>=n-2 && zeroMatrix[i-2][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i+1][j]>=n-2 && zeroMatrix[i-6][j]>=n-2 && zeroMatrix[i-5][j]>=n-2 && zeroMatrix[i-4][j]>=n-2 && zeroMatrix[i-3][j]>=n-2 && zeroMatrix[i-2][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            || (zeroMatrix[i][j]==n-2 && zeroMatrix[i-7][j]>=n-2 && zeroMatrix[i-6][j]>=n-2 && zeroMatrix[i-5][j]>=n-2 && zeroMatrix[i-4][j]>=n-2 && zeroMatrix[i-3][j]>=n-2 && zeroMatrix[i-2][j]>=n-2 && zeroMatrix[i-1][j]>=n-2)

            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-2;
            }

            else if (((zeroMatrix[i][j]==n-3 && zeroMatrix[i+1][j]>=n-3 && zeroMatrix[i+2][j]>=n-3 && zeroMatrix[i+3][j]>=n-3 && zeroMatrix[i+4][j]>=n-3 && zeroMatrix[i+5][j]>=n-3 && zeroMatrix[i+6][j]>=n-3) 
            
            || (zeroMatrix[i][j]==n-3 && zeroMatrix[i+1][j]>=n-3 && zeroMatrix[i+2][j]>=n-3 && zeroMatrix[i+3][j]>=n-3 && zeroMatrix[i+4][j]>=n-3 && zeroMatrix[i+5][j]>=n-3 && zeroMatrix[i-1][j]>=n-3) 

            || (zeroMatrix[i][j]==n-3 && zeroMatrix[i+1][j]>=n-3 && zeroMatrix[i+2][j]>=n-3 && zeroMatrix[i+3][j]>=n-3 && zeroMatrix[i+4][j]>=n-3 && zeroMatrix[i-2][j]>=n-3 && zeroMatrix[i-1][j]>=n-3) 

            || (zeroMatrix[i][j]==n-3 && zeroMatrix[i+1][j]>=n-3 && zeroMatrix[i+2][j]>=n-3 && zeroMatrix[i+3][j]>=n-3 && zeroMatrix[i-3][j]>=n-3 && zeroMatrix[i-2][j]>=n-3 && zeroMatrix[i-1][j]>=n-3) 

            || (zeroMatrix[i][j]==n-3 && zeroMatrix[i+1][j]>=n-3 && zeroMatrix[i+2][j]>=n-3 && zeroMatrix[i-4][j]>=n-3 && zeroMatrix[i-3][j]>=n-3 && zeroMatrix[i-2][j]>=n-3 && zeroMatrix[i-1][j]>=n-3) 

            || (zeroMatrix[i][j]==n-3 && zeroMatrix[i+1][j]>=n-3 && zeroMatrix[i-5][j]>=n-3 && zeroMatrix[i-4][j]>=n-3 && zeroMatrix[i-3][j]>=n-3 && zeroMatrix[i-2][j]>=n-3 && zeroMatrix[i-1][j]>=n-3) 

            || (zeroMatrix[i][j]==n-3 && zeroMatrix[i-6][j]>=n-3 && zeroMatrix[i-5][j]>=n-3 && zeroMatrix[i-4][j]>=n-3 && zeroMatrix[i-3][j]>=n-3 && zeroMatrix[i-2][j]>=n-3 && zeroMatrix[i-1][j]>=n-3) 
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-3;
            }

            else if (((zeroMatrix[i][j]==n-4 && zeroMatrix[i+1][j]>=n-4 && zeroMatrix[i+2][j]>=n-4 && zeroMatrix[i+3][j]>=n-4 && zeroMatrix[i+4][j]>=n-4 && zeroMatrix[i+5][j]>=n-4) 
            
            || (zeroMatrix[i][j]==n-4 && zeroMatrix[i+1][j]>=n-4 && zeroMatrix[i+2][j]>=n-4 && zeroMatrix[i+3][j]>=n-4 && zeroMatrix[i+4][j]>=n-4 && zeroMatrix[i-1][j]>=n-4) 

            || (zeroMatrix[i][j]==n-4 && zeroMatrix[i+1][j]>=n-4 && zeroMatrix[i+2][j]>=n-4 && zeroMatrix[i+3][j]>=n-4 && zeroMatrix[i-2][j]>=n-4 && zeroMatrix[i-1][j]>=n-4) 

            || (zeroMatrix[i][j]==n-4 && zeroMatrix[i+1][j]>=n-4 && zeroMatrix[i+2][j]>=n-4 && zeroMatrix[i-3][j]>=n-4 && zeroMatrix[i-2][j]>=n-4 && zeroMatrix[i-1][j]>=n-4) 

            || (zeroMatrix[i][j]==n-4 && zeroMatrix[i+1][j]>=n-4 && zeroMatrix[i-4][j]>=n-4 && zeroMatrix[i-3][j]>=n-4 && zeroMatrix[i-2][j]>=n-4 && zeroMatrix[i-1][j]>=n-4) 

            || (zeroMatrix[i][j]==n-4 && zeroMatrix[i-5][j]>=n-4 && zeroMatrix[i-4][j]>=n-4 && zeroMatrix[i-3][j]>=n-4 && zeroMatrix[i-2][j]>=n-4 && zeroMatrix[i-1][j]>=n-4) 
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-4;
            }
            
            else if (((zeroMatrix[i][j]==n-5 && zeroMatrix[i+1][j]>=n-5 && zeroMatrix[i+2][j]>=n-5 && zeroMatrix[i+3][j]>=n-5 && zeroMatrix[i+4][j]>=n-5) 
            
            || (zeroMatrix[i][j]==n-5 && zeroMatrix[i+1][j]>=n-5 && zeroMatrix[i+2][j]>=n-5 && zeroMatrix[i+3][j]>=n-5 && zeroMatrix[i-1][j]>=n-5) 

            || (zeroMatrix[i][j]==n-5 && zeroMatrix[i+1][j]>=n-5 && zeroMatrix[i+2][j]>=n-5 && zeroMatrix[i-2][j]>=n-5 && zeroMatrix[i-1][j]>=n-5) 

            || (zeroMatrix[i][j]==n-5 && zeroMatrix[i+1][j]>=n-5 && zeroMatrix[i-3][j]>=n-5 && zeroMatrix[i-2][j]>=n-5 && zeroMatrix[i-1][j]>=n-5) 

            || (zeroMatrix[i][j]==n-5 && zeroMatrix[i-4][j]>=n-5 && zeroMatrix[i-3][j]>=n-5 && zeroMatrix[i-2][j]>=n-5 && zeroMatrix[i-1][j]>=n-5) 
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-5;
            }
            
            else if (((zeroMatrix[i][j]==n-6 && zeroMatrix[i+1][j]>=n-6 && zeroMatrix[i+2][j]>=n-6 && zeroMatrix[i+3][j]>=n-6) 
            
            || (zeroMatrix[i][j]==n-6 && zeroMatrix[i+1][j]>=n-6 && zeroMatrix[i+2][j]>=n-6 && zeroMatrix[i-1][j]>=n-6)

            || (zeroMatrix[i][j]==n-6 && zeroMatrix[i+1][j]>=n-6 && zeroMatrix[i-2][j]>=n-6 && zeroMatrix[i-1][j]>=n-6)

            || (zeroMatrix[i][j]==n-6 && zeroMatrix[i-3][j]>=n-6 && zeroMatrix[i-2][j]>=n-6 && zeroMatrix[i-1][j]>=n-6)
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-6;
            }
            else if (((zeroMatrix[i][j]==n-7 && zeroMatrix[i+1][j]>=n-7 && zeroMatrix[i+2][j]>=n-7) 
            
            || (zeroMatrix[i][j]==n-7 && zeroMatrix[i+1][j]>=n-7 && zeroMatrix[i-1][j]>=n-7) 

            || (zeroMatrix[i][j]==n-7 && zeroMatrix[i-2][j]>=n-7 && zeroMatrix[i-1][j]>=n-7) 
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-7;
            }
            else if (((zeroMatrix[i][j]==n-8 && zeroMatrix[i+1][j]>=n-8) 
            
            || (zeroMatrix[i][j]==n-8 && zeroMatrix[i-1][j]>=n-8) 
            
            && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-8;
            }
            else if (((zeroMatrix[i][j]==n-9) && (zeroMatrix[i][j]>sizeMatrix))){
                sizeMatrix = n-9;
            }
        }    
    }

    return sizeMatrix;
}

int main() {

    /*
    En el main, se utiliza scanf para solicitarle al usuario el valor de n.
    Si n es un número menor que 1 o mayor que 10, se utiliza por defecto el 5.
    */

    printf("Ingrese un numero del 1 al 10:\n");
    scanf("%d", &n);

    if (n<1 || n>10){
        n=5;
    }

    int i = 0;
    int j = 0;

    /*
    Esta línea es de suma importancia porque rand() sólo genera números pseudoaleatorios.
    Es necesario invocar a srand para poder generar números aleatorios.

    A diferencia del código de ej3A.c, en lugar de declarar explícitamente las matrices
    principal y auxiliar, es necesario utilizar ciclos for porque n es variable.
    */

    srand(time(NULL));

    int mainMatrix[n][n];
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            mainMatrix[i][j] = rand() % 2;
        }
    }

    int zeroMatrix[n][n];
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            zeroMatrix[i][j] = 0;
        }
    }

    int largestSquareSize = findLargestSquare(mainMatrix, zeroMatrix);
    printf("El tamaño del cuadrado más grande de unos es: %d x %d\n", largestSquareSize, largestSquareSize);

    return 0;
}