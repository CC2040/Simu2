# Simu2
https://github.com/CC2040/Simu2.git

Examen de Programación - Tema 2

Parte 1: Teoría Breve

1. Pregunta 1: Explica brevemente en qué se diferencia una estructura if..else de una estructura switch. ¿Cuándo es preferible usar switch?
La estructura `if...else` evalúa condiciones booleanas y permite mayor flexibilidad, ya que puedes usar operadores de comparación complejos. En cambio, `switch` solo funciona con valores constantes y discretos (como enteros o caracteres), haciendo que sea más eficiente cuando hay múltiples opciones fijas.

**Usa `switch` cuando tienes muchas opciones que dependen de valores específicos,** ya que puede ser más claro y rápido que una cadena de `if...else`.

### Ejemplo de `if...else`
```cpp
int num = 2;

if (num == 1) {
    cout << "Es uno.";
} else if (num == 2) {
    cout << "Es dos.";
} else {
    cout << "No es uno ni dos.";
}
```

### Ejemplo de `switch`
```cpp
int num = 2;

switch (num) {
    case 1:
        cout << "Es uno.";
        break;
    case 2:
        cout << "Es dos.";
        break;
    default:
        cout << "No es uno ni dos.";
        break;
}
```
#### Fuente chat GPT


2. Pregunta 2: Describe la estructura básica de un bucle for y de un bucle while. ¿En qué caso usarías uno en lugar del otro?

La estructura básica de un bucle `for` se utiliza cuando se conoce de antemano cuántas veces debe ejecutarse el ciclo, mientras que `while` es útil cuando el número de iteraciones depende de una condición que se evalúa en cada paso.

### Estructura de un bucle `for`
```cpp
for (inicialización; condición; actualización) {
    // Código a ejecutar en cada iteración
}
```

### Estructura de un bucle `while`
```cpp
while (condición) {
    // Código a ejecutar mientras la condición sea verdadera
}
```

### Cuándo usar uno u otro
Usa `for` cuando sabes la cantidad de repeticiones necesarias, como para recorrer elementos en un arreglo. Usa `while` cuando necesitas repetir hasta que se cumpla una condición, como leer entradas del usuario hasta que dé una respuesta específica.

### Ejemplo de `for`
```cpp
for (int i = 0; i < 5; i++) {
    cout << "Iteración " << i << endl;
}
```

### Ejemplo de `while`
```cpp
int i = 0;
while (i < 5) {
    cout << "Iteración " << i << endl;
    i++;
}
```
## Fuente Chat GPT

Parte 2: Ejercicios Prácticos de Código

1. Ejercicio de Condicionales:

• Escribe un programa que solicite al usuario ingresar un número entero y verifique si es positivo, negativo o cero. Usa una estructura if..else para realizar la verificación e imprime el resultado.
• Bonus (opcional): Mejora el programa anterior para que, si el número es positivo, también verifique si es par o impar.

2. Ejercicio de Selección con switch:

• Crea un programa que solicite al usuario ingresar un número del 1 al 7 y que imprima el nombre del día de la semana correspondiente (1 para lunes, 2 para martes, etc.). Usa una estructura switch para resolverlo.

3. Ejercicio de Bucles:

• Escribe un programa que calcule la suma de los números pares entre 1 y 50 usando un bucle for.
• Bonus (opcional): Modifica el programa para que sume los números impares entre 1 y 50 utilizando un bucle while.

4. Ejercicio Básico de Arrays (Opcional):

• Declara un array de 5 números enteros e inicialízalo con los valores: 2, 4, 6, 8, 10.
• Usa un bucle for para recorrer el array e imprimir cada valor multiplicado por 3.

Rubén Juárez Cádiz
11:51
Examen de Programación - Tema 2

Parte 1: Teoría Breve


1. Pregunta 1: Explica brevemente en qué se diferencia una estructura if..else de una estructura switch. ¿Cuándo es preferible usar switch?
2. Pregunta 2: Describe la estructura básica de un bucle for y de un bucle while. ¿En qué caso usarías uno en lugar del otro?


Parte 2: Ejercicios Prácticos de Código



1. Ejercicio de Condicionales:

• Escribe un programa que solicite al usuario ingresar un número entero y verifique si es positivo, negativo o cero. Usa una estructura if..else para realizar la verificación e imprime el resultado.

• Bonus (opcional): Mejora el programa anterior para que, si el número es positivo, también verifique si es par o impar.

2. Ejercicio de Selección con switch:

• Crea un programa que solicite al usuario ingresar un número del 1 al 7 y que imprima el nombre del día de la semana correspondiente (1 para lunes, 2 para martes, etc.). Usa una estructura switch para resolverlo.

3. Ejercicio de Bucles:

• Escribe un programa que calcule la suma de los números pares entre 1 y 50 usando un bucle for.

• Bonus (opcional): Modifica el programa para que sume los números impares entre 1 y 50 utilizando un bucle while.

4. Ejercicio Básico de Arrays (Opcional):

• Declara un array de 5 números enteros e inicialízalo con los valores: 2, 4, 6, 8, 10.

• Usa un bucle for para recorrer el array e imprimir cada valor multiplicado por 3.
