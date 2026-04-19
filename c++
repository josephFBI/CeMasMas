/dibuja un cuadrado de 12 × 12 en la consola
#include <iostream>
using namespace std;

int main() {

    int tamaño = 12;

    for (int i = 1; i <= tamaño; i++) {
        for (int j = 1; j <= tamaño; j++) {

            // Bordes del cuadrado
            if (i == 1 || i == tamaño || j == 1 || j == tamaño) {
                cout << "# ";
            }
            // Patrón interno (estrellas y casas)
            else if ((i + j) % 2 == 0) {
                cout << "* ";
            }
            else {
                cout << "H ";
            }
        }
        cout << endl;
    }

    return 0;}