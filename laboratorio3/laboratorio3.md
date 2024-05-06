<div align="center">
  <a href="https://github.com/junyeom/IE-0117">
    <img src="images/three.png" alt="Programación" width="80" height="80">
  </a>

  <h3 align="center">Laboratorio 3</h3>

  <p align="center">
    Reporte de laboratorio
  </p>
</div>

## Introducción

En este laboratorio, como prerrequisito es necesario tener un conocimiento básico de los siguientes conceptos:

* Números triangulares
* Factorial
* Matriz cuadrada

Un número triangular es un número figurado que se puede representar mediante una red triangular de puntos en donde la primera fila contiene un elemento único, y cada fila subsecuente contiene un elemento más que el anterior. Dicho en términos más formales, un número triangular es un número obtenido meidante la suma de todos los enteros positivos menores o igual que un número entero positivo *n*.

<div align="center">
  <img src="images/TriangularNumber.png" width="300" height="100">
  <h4 align="center">Figura 1. Ilustración de números triangulares.</h4>
</div>

El factorial de un número entero positivo n se define mediante la siguiente expresión:

$$n!=n(n-1)(n-2)...(2)(1)$$

En otras palabras, el factorial n! es la multiplicación de todos los números enteros positivos menores o igual que n.

Una matriz es un arreglo de datos con importantes aplicaciones en diversos ámbitos académicos y profesionales. Una matriz de dos dimensiones *m x n* está constituida por *m* filas y *n* columnas. Si se cumple que $m=n$, se dice que la matriz es cuadrada.

## Implementación

### Ejercicio 1

Una manera de abordar este problema es mediante el uso de un ciclo for. Los ciclos for reciben:

* Una condición inicial
* Una condición de salida
* Un iterador

Se conoce que el primer número triangular es cero:

$$T_{1}=0$$

Como el primer elemento es un 0, es conveniente iniciar el ciclo con un 0. Además, es conveniente declarar una variable que vaya almacenando la suma de todos los elementos menores o igual que n. La condición de salida ocurre cuando se encuentren los primeros 100 números triangulares.

Para obtener el segundo número triangular, al primer número triangular se le suma el primer número triangular más 1. Entonces:

$$T_{2}=0+1=1$$

Para obtener el tercer número triangular, a la suma del primer número triangular más el segundo número triangular se le suma el segundo número triangular más 1. Entonces:

$$T_{3}=T_{1}+T_{2}+(T_{2}+1)=0+1+2=3$$

Para ilustrar que la secuencia no es una función rectilínea, se obtiene el cuarto número triangular:

$$T_{4}=T_{1}+T_{2}+T_{3}+(T_{3}+1)=0+1+2+3=6$$

Así sucesivamente hasta obtener $T_{100}$.

En C, el operador ++ permite ir guardando el resultado de las sumas previas en una variable, por lo que al utilizarlo dentro del ciclo for, es posible implementar en código la idea descrita anteriormente.

### Ejercicio 2



### Ejercicio 3



## Resultados

### Ejercicio 1



### Ejercicio 2



### Ejercicio 3



## Conclusiones

