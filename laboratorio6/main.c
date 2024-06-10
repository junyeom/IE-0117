/*
Universidad de Costa Rica
Escuela de Ingeniería Eléctrica
IE-0117
I-2024
Laboratorio 6

Jun Hyun Yeom Song
B17326
*/

/*
En este código, se encuentra el main del programa, el cual pone a prueba
la funcionalidad de cada función.
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main () {

    Node * lastIn = NULL;

    isEmpty (lastIn);
    printStack (&lastIn);

    push (7, &lastIn);
    push (11, &lastIn);
    push (13, &lastIn);
    push (17, &lastIn);

    isEmpty (lastIn);
    printStack(&lastIn);

    printf("El último dato ingresado al Stack es: %d\n", (peek(&lastIn)));

    printf("Se eliminó el último dato ingresado al Stack: %d\n", pop (&lastIn));

    printf("El último dato ingresado al Stack es: %d\n", (peek(&lastIn)));

    printf("Se eliminó el último dato ingresado al Stack: %d\n", pop (&lastIn));

    printf("El último dato ingresado al Stack es: %d\n", (peek(&lastIn)));

    isEmpty (lastIn);
    printStack(&lastIn);

    freeStack(&lastIn);

    isEmpty (lastIn);
    printStack(&lastIn);
}