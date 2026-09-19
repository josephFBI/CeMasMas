# INTRODUCCIÓN

## 1. Conceptos Básicos

### 1.1. ¿Qué es programar?

Etimológicamente es planificar el orden de las partes detallando la estructura. En programación valga la redundancia es la escritura de código estructurado para lograr ejecutar o solucionar un problema, por ejemplo, muchas acciones que se realizan con calculos matemáticos o siguen determinado proceso pueden sistematizarse como un programa o secuencia de instrucciones que cumpla lo que se le pide, algunas cosas que hace mejor la máquina son los cálculos, revisión de listas de cientos o miles, realizar calculos precisios, etc. 

### 1.2 ¿Qué es lógica?

Es una rama de la filosofía que estudia los principios de la demostración y la inferencia válida, falacias, paradojas y nocion de verdad. Esto en informática tiene el nombre de *Lógica computacional* en la que se tienen 1 y 0, con esto se pueden plantear secuencias lógicas y hasta crear calculadoras simples con contadores; en máquinas binarias, considerando la existencia de las computadoras cuánticas. La lógica computacional y la lógica matemática pueden ser aplicadas en programas; ***"La lógica se extiende al corazón de la informática a medida que surge como una disciplina: El trabajo de Alan Turing sobre el Entscheidungsproblem seguido del trabajo de Kurt Gödel sobre teoremas incompletos. La noción de la computadora de uso general que surgió de este trabajo fue de gran importancia para los diseñadores de la maquinaria informática en la década de 1940."*** 

Dentro de la programación aplicada en proyectos es la planificación de las reglas como de las variables y todo lo necesario para el programa como el control durante el proceso de este. Podría simplificarse como el planteamineto organizado y secuenciado de elementos para que puedan cumplir el objetivo sin errores.   

### 1.3 Algoritmo vs Programa

Los *algoritmos* son como se desarrola el código para su solución, por ejemplo se puede *desarrollar un algoritmo* para el cálculo del área de un cuadrado entoces para su desarrollo se tiene que el algoritmo necesita saber el lado de cuadrado, para que el algoritmo funcione como debería(conocere el área del cuadrado), entoces se tiene un algoritmo que lo calcula y vela por que funcione dentro de los parametros.

Un *programa* es la suma de los algoritmos como un ejecutable legible para la máquina, en C++ es simple de comprender ya que en donde funciona el algoritmo es dentro de archivo que termina en *.cpp* y los programas son los ejecutables o aplicaciones que terminan en *.exe*.

- **Algoritmo:** Secuencia finita de pasos para resolver un problema (independiente del lenguaje).
- **Programa:** Algoritmo escrito en un lenguaje que la máquina puede ejecutar.
- **Pseudocódigo** Algoritmo en lenguaje natural estructurado.

Ejemplo de un algoritmo para hacer café:

1. Llenar la cafetera con agua
2. Poner el filtro y el café
3. Encender
4. Esperar
5. Servir

Eso es un algoritmo. En C++ sería el "programa" con instrucciones reales.

### 1.4 Nivel de los Lenguajes de programación

- **Bajo nivel:** binario, ensamblador; son lenguajes que hablan casi directamente con el hardware
- **Alto nivel:** C, C++, Python, Java, Javascript, Rust, Go, vibe-coding, etc; estos son los más cercanos al humano, dado que se pueden leer, escribir y interpretar facilmente. 


## 2. C++

### 2.1 ¿Qué es C++?

Lenguaje de propósito general creado por **Bjarne Stroustrup** en 1985 como extensión de C ("C with classes"). Características:

- Compilado (rápido)
- Tipado estático y fuerte
- Multi-paradigma: procedural, orientado a objetos, genérico
- Control manual de memoria (con `new`/`delete`) y también automático (RAII, smart pointers)
- Base de motores de videojuegos, sistemas operativos, videojuegos AAA, navegadores

### 2.2 ¿Por qué aprender C++?

Pese a la facilidad de otros idiomas de programación como python o vibecoding, con C++ se puede apreneder de forma ordenada las funciones generales que comparten distintos programas y tomarlo como base para aplicar el conocimiento aprendido de C++ para amoldarse a cualquier idioma de programación.

### 2.3 Estructura de un programa en C++

```cpp
#include <iostream>   // librería de entrada/salida

using namespace std;  // (opcional, para no escribir std::)

int main() {          // función principal, punto de entrada
    cout << "Hola mundo" << endl;
    return 0;         // 0 = éxito
}
```

Partes:

- `#include` → trae librerías
- `main()` → donde arranca el programa
- `{}` → bloques de código
- `;` → fin de instrucción

### 2.4 Compilar y ejecutar

En consola se compila con lo siguiente:

```bash
g++ programa.cpp -o programa
./programa
```

---

## 3. LIBRERÍAS en C++

### 3.1 ¿Qué son?

Conjuntos de código ya escrito que puedes reutilizar. Se incluyen con `#include`. Podrían entenderse como funciones a las que las llamamos para resolver problemas, como plantillas listas para usar.

### 3.2 Librerías estándar más usadas

| Librería | Para qué sirve |
|----------|---------------|
| `<iostream>` | Entrada/salida (`cin`, `cout`) |
| `<string>` | Manejo de cadenas (`std::string`) |
| `<vector>` | Arreglos dinámicos |
| `<cmath>` | Matemáticas (`sqrt`, `pow`, `sin`) |
| `<cstdlib>` | Utilidades generales (`rand`, `exit`) |
| `<fstream>` | Leer/escribir archivos |
| `<algorithm>` | `sort`, `find`, `max`, `min` |
| `<ctime>` | Fecha y hora |
| `<iomanip>` | Formato de salida (decimales, alineación) |

### 3.3 Librerías propias

Puedes crear `milib.h` y hacer `#include "milib.h"`.

---

## 4. VARIABLES Y TIPOS DE DATOS

### 4.1 ¿Qué es una variable?

Espacio en memoria con nombre donde guardas un valor que puede cambiar durante la ejecución.

```cpp
int edad = 18;          // entero
double precio = 9.99;   // decimal
char letra = 'A';       // carácter
bool activo = true;     // booleano
string nombre = "Ana";  // cadena
```

### 4.2 Tipos primitivos en C++

| Tipo | Tamaño | Rango aprox. |
|------|--------|--------------|
| `bool` | 1 byte | true/false |
| `char` | 1 byte | -128 a 127 |
| `int` | 4 bytes | ±2 mil millones |
| `float` | 4 bytes | 7 dígitos decimales |
| `double` | 8 bytes | 15 dígitos decimales |
| `long long` | 8 bytes | ±9 quintillones |

### 4.3 Constantes

```cpp
const double PI = 3.14159;
const int MAX = 100;
```

### 4.4 Conversiones

```cpp
int a = 10;
double b = a;           // implícita
int c = (int) 9.7;      // explícita → 9
int d = static_cast<int>(9.7);  // forma recomendada en C++
```

---

## 5. OPERADORES

- **Aritméticos:** `+ - * / %`
- **Comparación:** `== != < > <= >=`
- **Lógicos:** `&& || !`
- **Asignación:** `= += -= *= /=`
- **Incremento/decremento:** `++ --`
- **Bit a bit:** `& | ^ ~ << >>`

---

## 6. CONDICIONALES

### 6.1 `if`, `else if`, `else`

```cpp
if (edad >= 18) {
    cout << "Mayor de edad";
} else if (edad >= 13) {
    cout << "Adolescente";
} else {
    cout << "Niño";
}
```

### 6.2 `switch`

```cpp
switch (opcion) {
    case 1: cout << "Uno"; break;
    case 2: cout << "Dos"; break;
    default: cout << "Otro";
}
```

### 6.3 Operador ternario

```cpp
string estado = (edad >= 18) ? "Adulto" : "Menor";
```

---

## 7. BUCLES

### 7.1 `for`

```cpp
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

### 7.2 `while`

```cpp
int i = 0;
while (i < 10) {
    cout << i << endl;
    i++;
}
```

### 7.3 `do-while`

```cpp
int opcion;
do {
    cout << "Elige opción: ";
    cin >> opcion;
} while (opcion != 0);
```

### 7.4 Control de bucles

- `break` → sale del bucle
- `continue` → salta a la siguiente iteración
- `return` → sale de la función

---

## 8. LISTAS Y ESTRUCTURAS DE DATOS

### 8.1 Arreglos estáticos

```cpp
int numeros[5] = {1, 2, 3, 4, 5};
cout << numeros[0];  // 1
```

### 8.2 Vectores (dinámicos)

```cpp
#include <vector>
vector<int> v = {1, 2, 3};
v.push_back(4);      // agregar
v.size();            // tamaño
v[0];                // acceso
```

### 8.3 Matrices

```cpp
int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
```

### 8.4 Strings

```cpp
string s = "Hola";
s.length();           // 4
s + " mundo";         // concatenar
s.substr(0, 2);       // "Ho"
s.find("la");         // posición
```

---

## 9. FUNCIONES

### 9.1 ¿Qué son?

Bloques reutilizables de código que realizan una tarea.

```cpp
int sumar(int a, int b) {
    return a + b;
}

int main() {
    cout << sumar(3, 4);  // 7
}
```

### 9.2 Tipos

- **Sin retorno:** `void`
- **Con retorno:** `int`, `double`, etc.
- **Con parámetros por valor o por referencia:**

```cpp
void duplicar(int &x) { x *= 2; }  // por referencia
```

### 9.3 Sobrecarga

```cpp
int sumar(int a, int b);
double sumar(double a, double b);
```

### 9.4 Recursividad

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

---

## 10. CLASES Y POO

### 10.1 ¿Qué es una clase?

Plantilla para crear objetos. Encapsula **atributos** (datos) y **métodos** (funciones).

```cpp
class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string n, int e) : nombre(n), edad(e) {}
    
    void saludar() {
        cout << "Hola, soy " << nombre << endl;
    }
};
```

### 10.2 Pilares de la POO

| Pilar | Descripción |
|-------|-------------|
| **Encapsulamiento** | Ocultar detalles internos (`private`/`public`) |
| **Herencia** | Una clase hereda de otra |
| **Polimorfismo** | Mismo método, distintos comportamientos |
| **Abstracción** | Modelar solo lo relevante |

### 10.3 Herencia

```cpp
class Estudiante : public Persona {
    string carrera;
public:
    Estudiante(string n, int e, string c) : Persona(n, e), carrera(c) {}
};
```

### 10.4 Otros conceptos

- Constructores / destructores
- `this`
- Métodos `const`
- `static`
- Sobrecarga de operadores
- `virtual` y clases abstractas

---

## 11. TEMAS AVANZADOS

| Tema | Por qué importa |
|------|-----------------|
| **Punteros y referencias** | Corazón de C++ |
| **Memoria dinámica** (`new`/`delete`) | Entender el stack vs heap |
| **Smart pointers** (`unique_ptr`, `shared_ptr`) | C++ moderno |
| **Entrada/salida de archivos** | Leer y guardar datos |
| **Manejo de errores** (`try`/`catch`) | Programas robustos |
| **Structs** | Alternativa ligera a clases |
| **Enums** | Valores con nombre |
| **Namespaces** | Organización |
| **Templates** | Genéricos |
| **STL** (`map`, `set`, `queue`, `stack`) | Estructuras ya hechas |
| **Algoritmos de ordenamiento** | Burbuja, quicksort, merge |
| **Búsqueda** | Lineal y binaria |
| **Complejidad (Big-O)** | Eficiencia |
| **Buenas prácticas** | Nombres, indentación, comentarios |
| **Git básico** | Control de versiones |
| **Compilación y Makefiles** | Proyectos grandes |
| **Debugging** | gdb, prints, tests |
| **Proyecto final** | Integrar todo |

---

## 12. PROYECTOS PRÁCTICOS

1. **Calculadora básica** → variables, condicionales, funciones
2. **Adivina el número** → bucles, `rand`
3. **Conversor de unidades** → funciones, entrada/salida
4. **Lista de tareas (To-Do)** → vectores, strings
5. **Agenda de contactos** → clases, archivos
6. **Juego del ahorcado** → strings, bucles, lógica
7. **Sistema de inventario** → POO, STL, archivos

---

## 13. RECURSOS

- **Practicar > Leer:** escribe código todos los días
- **Aprende a leer errores del compilador** (el compilador es tu amigo)
- **Documentación oficial:** [cppreference.com](https://cppreference.com)
- **Regla de los 3 intentos:** intenta, busca, pregunta (en ese orden)
- **No memorices sintaxis, entiende conceptos**

---

## 🎯 RESUMEN DEL TEMARIO

```
1. Introducción (qué es programar, lógica, algoritmos)
2. C++ (qué es, por qué, estructura)
3. Librerías
4. Variables y tipos
5. Operadores
6. Condicionales
7. Bucles
8. Listas / estructuras
9. Funciones
10. Clases y POO
11. Temas avanzados (punteros, memoria, archivos, errores, STL...)
12. Proyectos prácticos
13. Recursos
```