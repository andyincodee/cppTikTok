/*Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estándar si el caracter es una: vocal minúscula, es una vocal
mayuscula o no es una vocal*/
#include <iostream>
using namespace std;

int main()
{
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "es MINUSCULA";
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "es MAYUSCULA";
        break;
    default:
        cout << "ALERTA: no es vocal";
        break;
    }

    return 0;
}