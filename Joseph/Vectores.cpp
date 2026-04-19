//Vectores en C++

#include <iostream>
#include <vector>

using namespace std;

int main(){
//int   = entera
//float = decimales
//string= character (símbolos, letras, etc)
//double= decimales 
//long double= decimales
//bool  = boleanos (yes,no) (0,1)
 
double centimos[5] = {0.05, 0.1, 0.2, 1.1}

//centimos[0] = 0.05
//centimos[1] = 0.1
//centimos[2] = 0.2
//centimos[3] = 1.1


//CRUD
//Create = Crear
//Read   = Leer
//Update = Actulizar
//Delete = Borrar

int soles[200] = {0, 10, 20, 50, 100, 200}

for(int i=1; i<=5; i++){
   soles[i] = soles[i] + 100;
}

for(int i=0; i<4; i++){
   centimos[i] = centimos[i] + 1;
}

return 0;
}