// sudoku the game

#include <iostream>
#include <cstdlib>   // rand, srand
using namespace std;

int main() {
    // ==========================================
    // JOSEPH - VARIABLES DEL SUDOKU
    //==========================================

    // --- Límites del tablero ---
    const int TAM = 9;           // tablero 9x9
    const int BLOQUE = 3;        // bloques de 3x3
    const int MIN_SUDO = 17;     // mínimo de casillas dadas
    const int VACIO = 0;         // casilla vacía
    const int MIN_NUM = 1;       // número mínimo válido
    const int MAX_NUM = 9;       // número máximo válido

    // --- Tablero ---
    int tablero[TAM][TAM];       // tablero actual
    int original[TAM][TAM];      // tablero inicial (casillas fijas)

    // --- Estado del juego ---
    int casillasDadas = 0;       // cuántos números vienen dados
    int casillasVacias = 0;      // cuántas faltan por llenar
    bool juegoActivo = true;     // true = sigue jugando
    bool gano = false;           // true = completó el sudoku

    // --- Entrada del jugador ---
    int fila = 0;                // fila elegida (1-9)
    int columna = 0;             // columna elegida (1-9)
    int numero = 0;              // número a colocar (1-9)

    // --- Control de validación ---
    bool valido = true;          // resultado de la validación

    // ==========================================
    // PRUEBA DE IMPRESIÓN - TABLERO RANDOM
    // (sin reglas, solo para ver cómo se ve)
    // TODO: Pancito - reemplazar con random real
    // ==========================================

    srand(43);  // semilla fija (siempre mismo tablero)

    // Llenar con números random o vacío
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (rand() % 3 == 0) {
                tablero[i][j] = VACIO;
            } else {
                tablero[i][j] = (rand() % 9) + 1;  // 1 a 9
            }
            original[i][j] = tablero[i][j];
            if (tablero[i][j] != VACIO) casillasDadas++;
            else casillasVacias++;
        }
    }

    // Aviso si no cumple el mínimo
    if (casillasDadas < MIN_SUDO) {
        cout << "[AVISO] Menos de " << MIN_SUDO << " casillas dadas.\n";
    }

    // ==========================================
    // IMPRIMIR TABLERO (versión fea)
    // ==========================================
    cout << "\n  1 2 3   4 5 6   7 8 9\n";
    for (int i = 0; i < TAM; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < TAM; j++) {
            if (tablero[i][j] == VACIO) cout << ". ";
            else cout << tablero[i][j] << " ";
            if (j == 2 || j == 5) cout << "| ";
        }
        cout << "\n";
        if (i == 2 || i == 5) cout << "  ------+-------+------\n";
    }
    cout << "\n";

    // Info de la partida
    cout << "Casillas dadas: " << casillasDadas << "\n";
    cout << "Casillas vacias: " << casillasVacias << "\n";

    return 0;
}