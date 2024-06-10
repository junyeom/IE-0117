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
En este código, se encuentra la interfaz de todas las funciones.
*/

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

void push (int data, Node ** lastIn);

int pop (Node ** lastIn);

int peek(Node ** lastIn);

void isEmpty (Node * lastIn);

void printStack (Node ** lastIn);

void freeStack (Node ** lastIn);