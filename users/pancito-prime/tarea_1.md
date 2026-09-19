# TAREA_1: FUNDAMENTOS Y TEORÍA

## ¿Qué es programar? (en tus palabras di que es programas)

(Programar es crear instrucciones para que una computadora realice tareas)


## ¿Qué es programar? (busca en la web y pon la definicion formal de programar)

(Programar es escribir un conjunto de instrucciones para que una computadora ejecute tareas o resuelva problemas.)

## Tipos de variables: (definez como tal que es una variabel y las siguientes variales )
(Una variable es un espacio donde se guardan datos)

### 1. Variables básicas

- int: Almacena números enteros (sin decimales), positivos o negativos
- double: Guarda números decimales con mayor precisión.
- float
- char
- string
- bool

(
double: 
float: Guarda números decimales.
char: Guarda un solo carácter.
string: Guarda texto.
bool: Guarda valores verdadero (true) o falso (false))

### 2. Specialized Types

- void
- unsigned types
- signed types

(void: Indica que una función no devuelve ningún valor.
unsigned types: Tipos de datos que solo almacenan números positivos.
signed types: Tipos de datos que almacenan números positivos y negativos.

### 3. Variable Scope

- Global Scope:
- Block Scope:
- Local Scope:
- Nested Scope:

(Global Scope: Variable que puede usarse en todo el programa.
Block Scope: Variable que solo puede usarse dentro de un bloque de código { }.
Local Scope: Variable que solo puede usarse dentro de una función.
Nested Scope: Variables declaradas dentro de bloques anidados y solo accesibles en ellos.

## Estructura base de un archivo .cpp (describe la estructura del codigo en c++)

introduce la estructura de un codigo en c++

```cpp
#include <iostream>
using namespace std;

int main() {
    // Variables
    int numero = 10;

    // Instrucciones
    cout << numero << endl;

    return 0;
}
```