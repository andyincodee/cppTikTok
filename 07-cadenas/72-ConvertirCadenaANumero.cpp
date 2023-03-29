//entero: atoi()
//flotante: atof()
/*Transformar una cadena a numeros*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    char numero[25];
    float numeroFlotante;

    cout << "Ingrese una cadena de numeros: ";
    cin.getline(numero, 25);

    numeroFlotante = atof(numero);

    cout << "El numero es: " << numeroFlotante;

    return 0;
}