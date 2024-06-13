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

    // Creación del nuevo nodo
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // Conexión del nuevo nodo con el resto de la lista
    if (* lastIn != NULL) {
        newNode->prev = * lastIn;
        (* lastIn)->next = newNode;
    }

    // Actualización del nodo de referencia
    (* lastIn) = newNode;
}

int pop (Node ** lastIn) {

    // Si el último nodo de la lista es NULL, quiere decir
    // que la lista está vacía, por lo que no hay elementos
    // que eliminar, y se imprime un mensaje indicando el error.
    if (*lastIn == NULL) {
        printf ("Stack Underflow");
    }

    // Desconexión del último nodo de la lista
    Node * hold = * lastIn;
    int data = hold->data;
    * lastIn = hold->prev;

    // Actualización del nodo de referencia
    (* lastIn)->next = NULL;

    // Liberación de la memoria asignada
    free (hold);

    return data;
}

int peek(Node ** lastIn) {
    return (* lastIn)->data;
}

void isEmpty (Node * lastIn) {

    // Si el último nodo de la lista es NULL, quiere decir
    // que la lista está vacía.
    if (lastIn == NULL) {
        printf ("\nNo hay elementos en el Stack.\n");
    }
    // En cualquier otro caso, la lista no está vacía.
    else {
        printf ("\nSí hay elementos en el Stack.\n");
    }
}

void printStack (Node ** lastIn) {

    // El puntero hold guarda el valor del puntero que apunta al último nodo.
    // Esto se hace para poder manipular la lista.
    Node * hold = * lastIn;

    if (hold == NULL) {
        printf ("\nNo hay elementos en el Stack.\n");
    }
    else {
        while (hold != NULL) {
            // Se imprime la información de cada nodo
            printf("\nActual: %p\n Dato: %d\n Prev: %p\n Next %p\n", hold, hold->data, hold->prev, hold->next);
            // Se recorre la lista nodo por nodo hasta cumplir la condición de salida
            hold = hold->prev;
        }
    }
}

void freeStack (Node ** lastIn) {

    while (* lastIn != NULL) {
        // El puntero hold guarda el valor del puntero que apunta al último nodo
        Node * hold = * lastIn;
        // Se actualiza el nodo de referencia
        * lastIn = hold->prev;
        if (* lastIn != NULL) {
            // Se desconecta el nodo
            (* lastIn)->next = NULL;
        }
        // Se libera la memoria asignada
        free (hold);
    }
}