/*Escriba un programa que calcule x elevado a la y,
donde tanto x como y son enteros positivos,
sin utilizar la función pow*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, total = 1;

    cout << "Ingrese la base: ";
    cin >> x;
    cout << "Ingrese el exponente: ";
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        total *= x;
    }

    cout << "El resultado es: " << total;

    return 0;
}