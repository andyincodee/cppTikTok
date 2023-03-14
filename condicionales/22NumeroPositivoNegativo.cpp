// Comprobar si un numero es positivo o negativo
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float num;

    cout << "Digite un numero: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Cero: no es negativo y positivo";
    }
    else if (num > 0)
    {
        cout << "ES POSITIVO";
    }
    else
    {
        cout << "ES NEGATIVO";
    }

    return 0;
}