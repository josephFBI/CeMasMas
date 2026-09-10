# SUDOKU

## Reglas
- Debes completar las casillas vacías con números del 1 al 9.
- En cada fila, los números del 1 al 9 deben aparecer una sola vez.
- En cada columna, los números del 1 al 9 deben aparecer una sola vez.
- En cada bloque de 3×3, los números del 1 al 9 deben aparecer una sola vez.
- Los números que vienen dados al principio no se pueden cambiar.
- El tablero tiene 9 filas, 9 columnas y 9 bloques de 3×3.

## concepto
- El sudoku es un juego de lógica en el que se deben colocar los números del 1 al 9 en un tablero de 9×9, sin repetirlos en una misma fila, columna o bloque de 3×3.
## Descripción
- El jugador debe completar las casillas vacías con números del 1 al 9, evitando repetir un número en la misma fila, columna o bloque de 3×3, hasta completar todo el tablero correctamente el numero menor de casillas es 17.

## complejidad
- El sudoku tiene una complejidad media o alta, dependiendo de la cantidad de números que se dan al inicio. Se necesita concentración, lógica y paciencia para resolverlo.
numeros = int(input("¿Cuántos números faltan? "))

## roles

### Pancito_prime ( Frontend )

- Aleatoridad : Generar y mostrar los números aleatorios del sudoku (aleatorizacion y tipo de vista de la información)
- Jugabilidad : Como hacer divertido al juego, como interactua el jugador con el juego (controles WASD o [f c n] con una secuencia de posicion y numero o un metodo que se te ocurra) 

### Joseph ( Backend )

- Generacion de IA : Algoritmo que resuelva el sudoku
- Debbuging        : Crear codigos para resolver o hallar el mass cercano tipo GTA
- Variables        : Poner las variables a usar
