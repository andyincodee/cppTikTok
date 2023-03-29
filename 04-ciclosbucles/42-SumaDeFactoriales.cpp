/*Escriba un programa que calcule el valor de:
1! + 2! + 3! + ... + n! (Suma de factoriales)*/
#include <iostream>
using namespace std;
int main()
{
    int n, factorizar = 1, suma = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            factorizar *= i;
            cout << "       " << factorizar << endl;
            suma += factorizar;
        }
        cout << "----------------------------------" << endl;
        cout << "La suma de los factoriales es: " << suma << endl;
    }
    else
    {
        cout << "ALERTA: no es un numero natural";
    }

    return 0;
}