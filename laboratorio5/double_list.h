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
En este código, se encuentra la interfaz de todas las funciones.
*/

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// La función insertBeginning recibe un dato y un puntero doble que apunta
// al primer elemento de la lista doblemente enlazada.
// Inserta un nuevo nodo al inicio de la lista y actualiza el head de la lista.

void insertBeginning(int data, struct Node** cabeza);

// La función insertEnding recibe un dato y un puntero doble que apunta
// al primer elemento de la lista doblemente enlazada.
// A diferencia de insertBeginning, insertEnding recorre toda la lista
// hasta encontrar el último nodo. Seguidamente, inserta un nuevo nodo.

void insertEnding(int data, struct Node** cabeza);

// La función insertAtIndex recibe un índice, un dato y un 
// puntero doble que apunta al primer elemento de la lista
// doblemente enlazada.
// insertAtIndex utiliza el índice para insertar un nuevo nodo
// inmediatamente después del nodo con el índice especificado.

void insertAtIndex(int index, int data, struct Node** cabeza);

// La función deleteDuplicate recibe un puntero doble que apunta
// al primer elemento de la lista doblemente enlazada.
// En la función, se crean dos punteros para recorrer la lista.
// El puntero "actual" se detiene en cada elemento de la lista,
// mientras que el puntero "scan" apunta uno por uno a los elementos
// que se ubican a la derecha del elemento actual, y la función
// procede a compararlos.

void deleteDuplicate(struct Node** cabeza);

// La función searchData recibe un dato y un puntero doble que apunta
// al primer elemento de la lista doblemente enlazada.
// Busca el dato especificado en la lista, y si lo encuentra, imprime
// la posición donde se encuentra dicho dato.

void searchData(int data, struct Node** cabeza);

// printListForward recorre e imprime la lista resultante de inicio a fin.
// Se ha incluido la impresión de las direcciones de los nodos y sus lazos
// para visualizar la conexión entre los nodos.

void printListForward(struct Node** cabeza);

// printListBackward recorre e imprime la lista resultante de fin a inicio.
// Se ha incluido la impresión de las direcciones de los nodos y sus lazos
// para visualizar la conexión entre los nodos.

void printListBackward(struct Node** cabeza);

// freeList libera la memoria utilizada para evitar memory leaks.

void freeList(struct Node* head);