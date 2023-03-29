/*Pedir al usuario 2 cadenas de caracteres de numeros,
uno entero y el otro real, convertirlos a sus respectivos
valores y por ultimo sumarlos*/
//entero: atoi()
//flotante: atof()
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
    char numeroCadena1[50], numeroCadena2[50];
    int numeroEntero;
    float numeroFlotante;

    cout << "Ingrese una cadena (numero entero): ";
    cin.getline(numeroCadena1, 50);
    cout << "Ingrese una cadena (numero flotante): ";
    cin.getline(numeroCadena2, 50);

    numeroEntero = atoi(numeroCadena1);
    numeroFlotante = atof(numeroCadena2);

    float suma = numeroEntero + numeroFlotante;

    cout << "La suma de " << numeroEntero << " + " << numeroFlotante << " = ";
    cout << suma;
    cout << "\n La suma de: entero + flotante = flotante";

    return 0;
}