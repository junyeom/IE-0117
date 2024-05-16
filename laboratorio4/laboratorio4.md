<div align="center">
  <a href="https://github.com/junyeom/IE-0117">
    <img src="images/four.png" alt="Programación" width="80" height="80">
  </a>

  <h3 align="center">Laboratorio 4</h3>

  <p align="center">
    Jun Hyun Yeom Song (B17326)
  </p>
</div>

## Introducción

En este laboratorio, se exploran los siguientes conceptos:

* Búsqueda binaria
* Recursividad
* Punteros

A diferencia de la búsqueda lineal, el cual consiste en buscar en el arreglo elemento por elemento hasta encontrar un valor específico, la **búsqueda binaria** es un algoritmo que divide el arreglo a la mitad antes de ejecutar la búsqueda. Para que este algoritmo funcione, el arreglo debe estar ordenado. La búsqueda binaria busca un valor específico comparándolo con el valor posicionado en la mitad del arreglo. Si ocurre una correspondencia, se retorna el índice del elemento. Si el valor específico es mayor que el valor del elemento en el medio, se busca la mitad derecha del arreglo. Si el valor específico es menor que el valor del elemento en el medio, se busca la mitad izquierda del arreglo. Este proceso se repite hasta que el tamaño del arreglo sea cero.

La **recursividad** es un proceso en el cual una función se llama a sí misma. A diferencia de la iteración, la recursividad requiere una condición de salida, porque de lo contrario entra a un ciclo infinito. A pesar de que tiene el potencial de reducir el tamaño del código, la recursividad tiene la desventaja de requerir más recursos del procesador, porque involucra múltiples llamadas IO a la función. Ejemplos clásicos de funciones que se pueden implementar utilizando recursividad son:

* La operación factorial
* Búsqueda binaria
* Serie de Fibonacci

Un **puntero** es una variable que almacena la referencia a otra variable, la cual puede ser cualquier tipo de dato:

* int
* float
* char
* Arreglo
* Struct
* Union
* Otro puntero

La única diferencia entre punteros de diferentes tipos de datos es el tipo de dato de la variable o la constante hacia la cual el punto apunta.

Existen dos operadores que merecen especial mención:

* &: El operador "address of" se utiliza para *referenciar*, es decir, para obtener la dirección de una variable.
* \*: El operador asterisco se utiliza para *desreferenciar*, es decir, para acceder al valor almacenado en la dirección del puntero.

## Implementación

### Ejercicio 1

Implementar una búsqueda lineal de un arreglo requiere solamente de un ciclo for con una condición if adentro. Si el ciclo for encuentra el valor ingresado por el usuario, retorna la posición en donde encontró dicho valor. Si no, le informa al usuario de que no encontró el valor ingresado en el arreglo.

Para la implementación de la búsqueda binaria, realice el siguiente experimento mental. Imagine un edificio de 9 pisos. Usted dispone de un ascensor, y tiene en su mano un papel con un número. En cada piso, hay un mural con un número pintado, pero usted desconoce los números pintados en cada piso. Conoce que, a mayor altura, mayor es el número pintado. Su objetivo es encontrar el piso donde está su número.

Inicialmente, su *FLOOR* es el piso 1 del edificio, y su *CEILING* es el piso 9 del edificio, porque usted no tiene suficiente información para descartar pisos.

Usted decide iniciar en el punto medio del edificio, que en este caso es el piso 5.

|Índice|Piso|Número|
|---|---|---|
|8|9|101|
|7|8|95|
|6|7|67|
|5|6|42|
|4|5|40|
|3|4|25|
|2|3|19|
|1|2|7|
|0|1|5|

Usted llega al piso 5, y ve el número 40 pintado en un mural. Lo compara con su número, y determina que no son iguales. Su número es menor que 40. Usted determina que su *FLOOR* permanece igual, pero su *CEILING* ahora es el piso 4, porque los pisos 5 y mayores ahora son irrelevantes para usted. Para su objetivo, el edificio ahora es un edificio de 4 pisos.

|Índice|Piso|Número|
|---|---|---|
|3|4|25|
|2|3|19|
|1|2|7|
|0|1|5|

Usted decide repetir su estrategia, pero tiene que decidir si ir al piso 2 o al piso 3, porque, en una distribución par de pisos, existen dos pisos en el medio. En este caso, decide ir al piso 2.

*En C, al inicializar una variable de tipo entero y realizarle una división con residuo, dicha variable adopta el valor de la parte entera*

Usted llega al piso 2, y ve el número 7 pintado en un mural. Lo compara con su número, y determina que no son iguales. Su número es mayor que 7. Usted determina que su *CEILING* permanece igual (piso 4), pero su *FLOOR* ahora es el piso 3, porque los pisos 2 y menores ahora son irrelevantes para usted. Ahora, el edificio es:

|Índice|Piso|Número|
|---|---|---|
|3|4|25|
|2|3|19|

Usted decide ir al piso 3. y ve el número 19 pintado en un mural. Lo compara con su número, y determina que no son iguales. Su número es mayor que 19. Usted determina que su *CEILING* permanece igual (piso 4), pero su *FLOOR* ahora es el piso 4, porque los pisos 3 y menores ahora son irrelevantes para usted. 

|Índice|Piso|Número|
|---|---|---|
|3|4|25|

Nota que su *FLOOR* y su *CEILING* son iguales. Se dirige al piso 4, y encuentra el número 25 pintado en un mural. Es su número. Ha encontrado el piso del edificio en donde está su número.

### Ejercicio 2



## Resultados

### Ejercicio 1

Al compilar el archivo ej1A.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej1A.png" width="400" height="400">
  <h4 align="center">Figura 1.</h4>
</div>

Al compilar el archivo ej1B.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej1B.png" width="400" height="400">
  <h4 align="center">Figura 2. </h4>
</div>

### Ejercicio 2

Al compilar el archivo ej2A.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej2A.png" width="400" height="400">
  <h4 align="center">Figura 3.</h4>
</div>

Al compilar el archivo ej2B.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej2B.png" width="400" height="400">
  <h4 align="center">Figura 4. </h4>
</div>

Al compilar el archivo ej2C.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej2C.png" width="400" height="400">
  <h4 align="center">Figura 5. </h4>
</div>

## Conclusiones



## Referencias

