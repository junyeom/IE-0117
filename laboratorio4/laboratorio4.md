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

A diferencia de la búsqueda lineal, el cual consiste en buscar en el arreglo elemento por elemento hasta encontrar un valor específico, la **búsqueda binaria** es un algoritmo que divide el arreglo a la mitad antes de ejecutar la búsqueda. Para que este algoritmo funcione, el arreglo debe estar ordenado. La búsqueda binaria busca un valor específico comparándolo con el valor posicionado en la mitad del arreglo. Si ocurre una correspondencia, se retorna el índice del elemento. Si el valor específico es mayor que el valor del elemento en el medio, se busca la mitad derecha del arreglo. Si el valor específico es menor que el valor del elemento en el medio, se busca la mitad izquierda del arreglo. Este proceso se repite hasta que el tamaño del arreglo sea cero. (1)

La **recursividad** es un proceso en el cual una función se llama a sí misma. A diferencia de la iteración, la recursividad requiere una condición de salida, porque de lo contrario entra a un ciclo infinito. A pesar de que tiene el potencial de reducir el tamaño del código, la recursividad tiene la desventaja de requerir más recursos del procesador, porque involucra múltiples llamadas IO a la función. Ejemplos clásicos de funciones que se pueden implementar utilizando recursividad son: (2)

* La operación factorial
* Búsqueda binaria
* Serie de Fibonacci

Un **puntero** es una variable que almacena la referencia a otra variable, la cual puede ser cualquier tipo de dato (3):

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

*Si en la condición FLOOR = CEILING no se logra encontrar el valor buscado, la implementación debe informar al usuario de que el valor ingresado no se encuentra en ninguna posición del arreglo*

### Ejercicio 2

Para inspeccionar un arreglo de una dimensión, basta implementar un ciclo for.

Para encontrar el valor mínimo de un arreglo, se puede construir una función findMin que vaya almacenando el menor valor encontrado en cada iteración hasta llegar al último elemento del arreglo. De la misma manera, para encontrar el valor máximo de un arrelo, se puede construir una función findMax que vaya almacenando el mayor valor encontrado en cada iteración hasta llegar al último elemento del arreglo.

Para la implementación de la función findMin y de la función findMax, se utilizan dos funciones diferentes para poder retornar el valor mínimo y el valor máximo por aparte. Sin embargo, con el uso de punteros, es posible retornar más de un valor usando sólo una función. Se implementa una lógica similiar a la utilizada en las funciones findMin y findMax, pero en este caso no es necesario retornar valores, porque los mismos punteros almacenan los datos en la dirección de las variables.

## Resultados

### Ejercicio 1

Al compilar el archivo ej1A.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej1A.png" width="400" height="100">
  <h4 align="center">Figura 1. Resultado de la ejecución de ej1A.c</h4>
</div>

Se obtiene exitosamente el resultado esperado, incluso cuando se ingresa un valor que no pertenece al arreglo.

Al compilar el archivo ej1B.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej1B.png" width="400" height="150">
  <h4 align="center">Figura 2. Resultado de la ejecución de ej1B.c</h4>
</div>

Se obtiene exitosamente el resultado esperado, incluso cuando se ingresa un valor que no pertenece al arreglo.

Al compilar el archivo ej1C.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej1C.png" width="400" height="400">
  <h4 align="center">Figura 3. Resultado de la ejecución de ej1C.c</h4>
</div>

Sin embargo, al ingresar un valor que no pertenece al arreglo, se obtiene un segmentation fault:

<div align="center">
  <img src="images/ej1C_error.png" width="400" height="100">
  <h4 align="center">Figura 4. Error al ingresar un valor incorrecto.</h4>
</div>

### Ejercicio 2

Al compilar el archivo ej2A.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej2A.png" width="400" height="100">
  <h4 align="center">Figura 5. Resultado de la ejecución de ej2A.c</h4>
</div>

Se obtiene exitosamente el resultado esperado.

Al compilar el archivo ej2B.c y correr el ejecutable, se obtiene el siguiente resultado en la línea de comando:

<div align="center">
  <img src="images/ej2B.png" width="400" height="50">
  <h4 align="center">Figura 6. Resultado de la ejecución de ej2B.c</h4>
</div>

También se obtiene exitosamente el resultado esperado.

## Conclusiones

* El algoritmo de búsqueda binaria logra encontrar un elemento en una menor cantidad de iteraciones que el algoritmo de búsqueda lineal.

* La recursividad es una propiedad matemática con diversas aplicaciones que permite simplificar el código de un programa. Sin embargo, un código de menor tamaño no necesariamente se traduce en un menor uso de recursos.

* Aplicar la misma lógica pero con diferentes algoritmos puede generar errores. Por ejemplo, en la ejecución de ej1B.c (búsqueda lineal sin recursividad), al ingresar un valor que no pertenece al arreglo, se imprime el mensaje de excepción. Sin embargo, en la ejecución de ej1C.c (búsqueda lineal con recursividad), al ingresar un valor que no pertenece al arreglo, se comete un segmentation fault.

* Los punteros son útiles para acceder a datos en la memoria sin tener que llamar a las variables. Además, mediante el uso de punteros es posible ejecutar la funcionalidad de varias funciones en una sola.

## Referencias

1. TutorialsPoint. Binary Search Algorithm. Accesado el 14 de mayo del 2024 en https://www.tutorialspoint.com/data_structures_algorithms/binary_search_algorithm.htm
2. TutorialsPoint. Recursion in C. Accesado el 14 de mayo del 2024 en https://www.tutorialspoint.com/cprogramming/c_recursion.htm
3. TutorialsPoint. Pointers in C. Accesado el 14 de mayo del 2024 en https://www.tutorialspoint.com/cprogramming/c_pointers.htm