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
En este código, se encuentra la implementación de todas las funciones.
*/


#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push (int data, Node ** lastIn) {
    
    Node * newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf ("Fallo al reservar memoria.\n");
    }

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (* lastIn != NULL) {
        newNode->prev = * lastIn;
        (* lastIn)->next = newNode;
    }

    (* lastIn) = newNode;
}

int pop (Node ** lastIn) {

    if (*lastIn == NULL) {
        printf ("Stack Underflow");
    }
    Node * hold = * lastIn;
    int data = hold->data;
    * lastIn = hold->prev;

    (* lastIn)->next = NULL;

    free (hold);
    return data;
}

int peek(Node ** lastIn) {
    return (* lastIn)->data;
}

void isEmpty (Node * lastIn) {
    if (lastIn == NULL) {
        printf ("No hay elementos en el Stack.\n");
    }
    else {
        printf ("Sí hay elementos en el Stack.\n");
    }
}

void printStack (Node ** lastIn) {
    Node * hold = * lastIn;
    if (hold == NULL) {
        printf ("No hay elementos en el Stack.\n");
    }
    else {
        while (hold != NULL) {
            printf("\nActual: %p\n Dato: %d\n Prev: %p\n Next %p\n", hold, hold->data, hold->prev, hold->next);
            hold = hold->prev;
        }
    }
}

void freeStack (Node ** lastIn) {

    while (* lastIn != NULL) {
        Node * hold = * lastIn;
        * lastIn = hold->prev;
        if (* lastIn != NULL) {
            (* lastIn)->next = NULL;
        }
        free (hold);
    }
}