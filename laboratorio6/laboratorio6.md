<div align="center">
  <a href="https://github.com/junyeom/IE-0117">
    <img src="images/six.png" alt="Programación" width="150" height="150">
  </a>

  <h3 align="center">Laboratorio 6</h3>

  <p align="center">
    Jun Hyun Yeom Song (B17326)
  </p>
</div>

## Introducción

En este laboratorio, se exploran los siguientes conceptos:

* Stack

El **stack** (o **pila** en español) es una estructura de datos lineal en el cual los datos se almacenan utilizando el principio de Last In First Out (LIFO), es decir, el último dato en entrar es el primer dato en salir. Se puede representar utilizando arrays, para implementar un stack de tamaño estático, o utilizando listas, para implementar un stack de tamaño dinámico. En este laboratorio se ha implementado un stack utilizando listas doblemente enlazadas.

<div align="center">
  <img src="images/stack.jpg">
  <h4 align="center">Figura 1. Ilustración del stack.</h4>
</div>

## Implementación

Se solicita la implementación de las siguientes funciones:

* push()
* pop()
* peek()
* isEmpty()

Adicionalmente, se solicita la impresión de la lista (printStack) para demostrar la funcionalidad de las funciones, y una función que libere la memoria asignada para evitar memory leaks (freeStack).

### push()

Esta función requiere dos parámetros: un puntero doble que apunte al nodo de referencia, y el dato que será ingresado a la lista. Requiere un puntero doble para poder modificar la dirección del nodo de referencia. Para poder aplicar el principio de LIFO, el nodo de referencia es el último nodo que ingresó a la lista. Así, cada vez que se ejecute un push, el nuevo nodo se convierte en el último nodo de la lista.

### pop()

Esta función sólo requiere un parámetro: un puntero doble que apunte al último nodo. Mediante el puntero doble, modifica la dirección del último nodo, lo desconecta del resto de la lista, y libera la memoria asignada para evitar memory leaks. A diferencia de push, pop sí retorna un valor; el dato que acaba de ser eliminado. Esta función imprime un mensaje de error si la lista está vacía.

### peek()

Esta función retorna el dato del último nodo sin eliminarlo. Para esto, recibe un puntero doble que apunte al último nodo y lo desreferencia.

### isEmpty()

Esta función no requiere un puntero doble porque no modificará la dirección del último nodo. Si la dirección del último nodo es NULL, quiere decir que la lista está vacía. En cualquier otro caso, la lista no está vacía.

### printStack()

Esta función recibe un puntero doble que apunta al último nodo, y lo utiliza para recorrer toda la lista. En la implementación, se decidió imprimir el dato, el prev y el next de cada nodo para poder apreciar las conexiones de la lista.

### freeStack()

Esta función recibe un puntero doble que apunta al último nodo, y lo utiliza para recorrer toda la lista y liberarla nodo por nodo.

## Resultados

Al ejecutar el comando make en la terminal, se compilan los archivos utilizando el archivo Makefile, y se genera un ejecutable llamado main.

Al ejecutar main, se obtienen los siguientes resultados:

<div align="center">
  <img src="images/2.png">
  <h4 align="center">Figura 2. Primera ejecución de la función isEmpty.</h4>
</div>

Como se observa en la figura 2, la lista está vacía porque aún no se han ingresado nodos a la lista.

<div align="center">
  <img src="images/3.png">
  <h4 align="center">Figura 3. Cuatro ejecuciones consecutivas de la función push.</h4>
</div>

Tras ejecutar push cuatro veces, se imprime la lista utilizando printStack y se aprecia que cada nodo está conectado en el orden correcto.

<div align="center">
  <img src="images/4.png">
  <h4 align="center">Figura 4. Ejecuciones alternantes de las funciones peek y pop.</h4>
</div>

Se ejecuta un peek y se imprime el último dato ingresado, 17. Se elimina utilizando pop. Se ejecuta otro peek, y se verifica que el último dato de la lista ahora es 13. Se elimina utilizando otro pop. Se ejecuta otro peek, y se verifica que el ultimo dato de la lista ahora es 11.

<div align="center">
  <img src="images/5.png">
  <h4 align="center">Figura 5. Segunda ejecución de la función isEmpty.</h4>
</div>

Se ejecuta isEmpty, y ahora imprime un mensaje indicando que la lista no está vacía.

<div align="center">
  <img src="images/6.png">
  <h4 align="center">Figura 6. Impresión de la lista resultante.</h4>
</div>

Se ejecuta printStack, y se verifica que la lista ahora sólo contiene dos elementos.

Se ejecuta freeStack, y se ejecuta isEmpty.

<div align="center">
  <img src="images/7.png">
  <h4 align="center">Figura 7. Tercera ejecución de la función isEmpty.</h4>
</div>

Se verifica que la lista ha sido eliminada completamente.

<div align="center">
  <img src="images/8.png">
  <h4 align="center">Figura 8. Ejecución de valgrind.</h4>
</div>

Finalmente, al ejecutar valgrind, se evidencia que este programa no tiene memory leaks.

## Conclusiones

* Es posible implementar el stack utilizando listas doblemente enlazadas, sin embargo es necesario especificar que en el fondo se está haciendo uso de memoria dinámica para simular su comportamiento.
* El laboratorio 5 sirvió como base para implementar la lógica del stack utilizando listas doblemente enlazadas. Esto demuestra que las listas doblemente enlazadas poseen un diverso rango de aplicaciones.

## Referencias

1. Tutorials Point. Accesado el 12 de junio del 2024 en https://www.tutorialspoint.com/data_structures_algorithms/stack_algorithm.htm