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

/*
La funcióń push recibe un dato y un puntero doble que apunta al
nodo de referencia de la lista, es decir al último nodo de la lista.
Requiere el puntero doble para poder modificar su valor.
*/

void push (int data, Node ** lastIn);

/*
La función pop recibe un puntero doble que apunta al último nodo de la lista.
A diferencia de la función push, la función pop sí retorna un valor; retorna
el elemento que ha sido eliminado de la lista.
*/

int pop (Node ** lastIn);

/*
La función peek recibe un puntero doble que apunta al último nodo de la lista.
Retorna el dato del último nodo de la lista sin eliminarlo.
*/

int peek(Node ** lastIn);

/*
La función isEmpty recibe un puntero que apunta al último nodo de la lista
y determina si la lista está vacía o no.
Como no requiere modificar su valor, es suficiente pasarle un puntero simple.
*/

void isEmpty (Node * lastIn);

/*
La función printStack recibe un puntero doble que apunta al último nodo de la lista.
Recorre la lista nodo por nodo y la imprime.
*/

void printStack (Node ** lastIn);

/*
La función freeStack recibe un puntero doble que apunta al último nodo de la lista.
Recorre la lista nodo por nodo y libera la memoria asignada.
*/

void freeStack (Node ** lastIn);