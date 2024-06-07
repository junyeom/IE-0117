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
En este código, se encuentra el main del programa, el cual pone a prueba
la funcionalidad de cada función.
*/

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

int main(){

    struct Node * head = NULL;

    printf("\nInsertar un 5 al inicio:\n");
    insertBeginning (5, &head);

    printListForward(&head);

    printf("\nInsertar un 9 al inicio:\n");
    insertBeginning (9, &head);

    printListForward(&head);

    printf("\nInsertar un 22 al inicio:\n");
    insertBeginning (22, &head);

    printListForward(&head);

    printf("\nInsertar un 100 al final:\n");
    insertEnding (100, &head);

    printListForward(&head);

    printf("\nInsertar un 236 al final:\n");
    insertEnding (236, &head);

    printListForward(&head);

    printf("\nInsertar un 50 inmediatamente después del índice 1:\n");
    insertAtIndex(1, 50, &head);

    printListForward(&head);

    printf("\nInsertar un 100 inmediatamente después del índice 3:\n");
    insertAtIndex(3, 100, &head);

    printListForward(&head);

    printf("\nEliminar el primer nodo duplicado de la lista:\n");
    deleteDuplicate (&head);

    printListForward(&head);

    printf("\nLa lista resultante impresa al revés: \n");
    printListBackward(&head);
    
    printf("\nBuscar un nodo con el dato 22:\n");
    searchData (22, &head);

    printf("\nBuscar un nodo con el dato 23:\n");
    searchData (23, &head);

    freeList(head);
    return 0;
}