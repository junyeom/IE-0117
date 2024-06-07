/*
Universidad de Costa Rica
Escuela de Ingeniería Eléctrica
IE-0117
I-2024
Laboratorio 5

Jun Hyun Yeom Song
B17326
*/

/*
En este código, se encuentra la implementación de todas las funciones.
*/

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

void insertBeginning(int data, struct Node** cabeza){

    // Reserva de memoria para el nuevo nodo
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL){
        printf("Fallo al reservar memoria\n");
        return;
    }

    // Creación del nuevo nodo
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    // Conexión del nuevo nodo con la lista
    if (*cabeza != NULL){
        (*cabeza)->prev = newNode;
        newNode->next = *cabeza;
    }

    // Actualización del nuevo head
    *cabeza = newNode;
}

void insertEnding(int data, struct Node** cabeza){

    // Reserva de memoria para el nuevo nodo    
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL){
        printf("Fallo al reservar memoria\n");
        return;
    }

    // Creación del nuevo nodo
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    // Creación de la variable temporal lastNode
    struct Node * lastNode = *cabeza;

    // Recorrido de la lista hasta encontrar el último nodo
    while (lastNode->next != NULL){
        lastNode = lastNode->next;
    }

    // Conexión del nuevo nodo con la lista en el último nodo
    lastNode->next = newNode;
    newNode->prev = lastNode;
}

void insertAtIndex(int index, int data, struct Node** cabeza){

    // Reserva de memoria para el nuevo nodo    
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL){
        printf("Fallo al reservar memoria\n");
        return;
    }

    // Creación del nuevo nodo
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    int i = 0;

    // Creación de la variable temporal indexNode
    struct Node * indexNode = *cabeza;

    // Recorrido de la lista hasta encontrar el nodo con el índice especificado
    while (indexNode != NULL && i < index){
        indexNode = indexNode->next;
        i++;
    }

    // Conexión del nuevo nodo con los nodos contiguos
    newNode->prev = indexNode;
    newNode->next = indexNode->next;
    indexNode->next->prev = newNode;
    indexNode->next = newNode;
}

void deleteDuplicate(struct Node** cabeza){

    // Creación de los punteros para la implementación de la lógica
    struct Node * actual = *cabeza;
    struct Node * scan = NULL;
    
    while (actual != NULL){
        scan = actual->next; // El puntero "scan" inicia a la par del puntero "actual"

        while (scan != NULL){

            // Lógica para detectar si dos elementos son iguales y eliminar
            // el primer elemento repetido.
            if (actual->data == scan->data){

                if (scan->next != NULL){
                    scan->next->prev = scan->prev;
                }
                if (scan->prev != NULL){
                    scan->prev->next = scan->next;
                }

                free(scan);
                return; // Retorna al main si libera un nodo
            }
            // Actualización del puntero "scan" en caso de que no encuentre nodos repetidos.
            // Nótese que el puntero "actual" permanece en la misma posición hasta que se cumpla
            // scan == NULL, lo cual ocurre hasta que el puntero "scan" recorra toda la lista.
            scan = scan->next;
        }
        // Actualización del puntero "actual". Si la función no encontró nodos con el mismo dato
        // que el elemento actual, se repite la operación anterior con el siguiente elemento.
        actual = actual->next;
    }
}

void searchData(int data, struct Node** cabeza){

    // Creación de la variable temporal actual
    struct Node * actual = *cabeza;

    int i = 0;
    int found;

    while (actual != NULL){
        // Si el ciclo encuentra el dato especificado, guarda la posición
        // en found y sale del ciclo
        if (actual->data == data){
            found = i;
            break;
        }
        
        // Siguiente elemento
        actual = actual->next;
        i++;

        // Si no encuentra el dato especificado, guarda -1 en found
        found = -1;
    }
    if (found >= 0){
        printf("El dato %d fue encontrado en la posición %d de la lista\n", actual->data, i);
    }
    else {
        printf("El dato especificado no fue encontrado en la lista\n");
    }
}

void printListForward(struct Node** cabeza){

    printf("\nLa lista impresa de inicio a fin es: \n");

    struct Node * actual = *cabeza;

    while (actual != NULL){
        printf("\nActual: %p\n Dato: %d\n Prev: %p\n Next: %p\n", actual, actual->data, actual->prev, actual->next);
        actual = actual->next;
    }
}

void printListBackward(struct Node** cabeza){

    printf("\nLa lista impresa de fin a inicio es: \n");

    struct Node * actual = *cabeza;

    while (actual->next != NULL){
        actual = actual->next;
    }

    while (actual != NULL){
        printf("\nActual: %p\n Dato: %d\n Prev: %p\n Next: %p\n", actual, actual->data, actual->prev, actual->next);
        actual = actual->prev;
    }
}

void freeList(struct Node* head){

    // Creación de la variable temporal actual
    struct Node * actual = head;

    struct Node * next;
    
    while (actual != NULL){
        next = actual->next; // Se guarda la dirección del siguiente nodo antes de liberar el nodo actual
        free(actual); // Se libera el nodo actual
        actual = next; // Se actualiza el nodo
    }
}