/*Realice un programa que solicite de la entrada estandar un entero
del 1 al 10 y muestre en la salida estándar su tabla de multiplicar*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "----------------------" << endl;
    cout << "TABLA DE MULTIPLICAR" << endl;
    cout << "----------------------" << endl;

    do
    {
        cout << "Ingrese un numero (1 al 10): ";
        cin >> num;
    } while ((num < 1) || (num > 10));

    for (int i = 0; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}