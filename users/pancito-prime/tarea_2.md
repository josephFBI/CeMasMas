# Tarea 2: LOGICA DE PROGRAMACIÓN (TIEMPO DE CLASES desde 20:00 a 21:30)

Ya te la sabes lee y completa según lo que se te pida, al final el ejercicio 5, 6 y 7 debes hacerlo(intenta hacerlo sin IA, confío en tus capacidades).

## 0. ¿Qué es la lógica del programa?(responde con tus palabras)

*La lógica de programación es ordenar instrucciones para resolver problemas*

## 1. ¿Qué es la lógica del programa?(responde con información de internet)

*La lógica de programación es el conjunto de reglas para crear programas que solucionen problemas*

## 2. ¿Porque un programa tiene lógica?(busca en internet la respuesta)

Un programa tiene lógica porque necesita seguir pasos ordenados para funcionar correctamente

## 3. ¿Porque no puedo hacer lo siguiente en ese orden?

Cocinando awa:

0. Salgo de la cocina
1. Hago hervir awa
2. Voy a la cocina
3. Espero a que hierva el awa 
4. Prendo el fuego
5. Lleno la tetera
6. Busco la tetera
7. Apagó la cocina
8. Me sirvo awa con cocoa y azúcar en la taza
9. Prendo la cocina 

*No se puede hacer en ese orden porque los pasos están desordenados y no se logra el objetivo*

## 4. Introduce el orden correcto en números (tipo 1->2->3 y así)

*6 -> 2 -> 5 -> 9 -> 4 -> 1 -> 3 -> 7 -> 8 -> 0*

## 5. Según los pasos para cocinar awa. ¿Porque el orden importa para la lógica?

*El orden importa porque algunos pasos dependen de otros*

## 6. Dame 3 ejemplos en dónde el orden no importe y de el mismo resultado:

1. *Guardar libros y cuadernos*
2. *Ordenar lápices y borradores*
3. *Contar monedas*

## 7. De tus ejemplos anteriores porque siguen funcionando o como es que dan el mismo resultado.

*Siguen funcionando porque el orden de las acciones no cambia el resultado*

## 8. Para hacer un programa debes de conocer del tema, y debes saber mucho? no xd solo lo necesario. Por ejemplo, en programación es usual y frecuente usar operaciones matemáticas porque es en lo que se especializan las computadoras, entonces como puntos básicos ya se programó una calculadora(era simple las potenciaciones la hicimos con su definición matemática osea n multiplicado m veces).
Ahora la tarea es hacer lo siguiente:

Realiza un programa en secuencias lógicas, tipo el ejercicio 3 para lo siguiente:

### Tarea de clase 1: Realiza un programa en secuencias de lo que necesites para lograr *HALLAR EL ÁREA DE UN CUBO*

*Pedir el lado.

Calcular: Área = 6 × lado².

Mostrar el resultado*

### Tarea de clase 2: Realiza un programa en secuencias de lo que necesites para lograr *HALLAR EL PERÍMETRO DE UN RECTÁNGULO*

*dir base y altura.

Calcular: P = 2 × (base + altura).

Mostrar el resultado.*

### Tarea de clase 3: Realiza un programa en secuencias de lo que necesites para lograr *HALLAR EL ÁREA DE UN CONO*

*Pedir radio y generatriz.

Calcular: Área = π × radio × (radio + generatriz).

Mostrar el resultado*

### PISTA: Recuerda conocer sobre tu tema, busca en internet las fórmulas y también que es área y perímetro. Recuerda también que datos se necesitan como variables y en dónde las almacenas, recuerda el uso de variables estáticas.

## Una vez acabado pon tus 3 secuencias lógicas realiza el código del programa para los 3 casos

```cpp
//cubo.cpp
//Pones tu código C++ del área del cubo
#include <iostream>
using namespace std;

int main() {
    // Variables
    int lado = 0;
    int caras = 6;
    int area_cuadrado = lado * lado;
    int area_cubo = caras * area_cuadrado;
    
    // Instrucciones
    cout <<"el area del cuadrado es: "<< area_cubo << endl;

    return 0;
}
```

```cpp
//Pones tu código C++ del perímetro del cuadrado
```

```cpp
//Pones tu código C++ del área del cono
```
