/*Escriba un programa que calcule el valor de:
1 * 2 * 3 * ... * n (factorial)*/
#include <iostream>
using namespace std;
int main()
{
    int n, factorial = 1;

    cout << "Ingrese el numero para calcular el factorial: ";
    cin >> n;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i; // factorial *= i;
            cout << "    " << i;
        }
        cout << endl;
        cout << "El factorial de " << n << "! es: " << factorial;
    }
    else if (n == 0)
    {
        cout << "El factorial de 0! es: " << 1;
    }
    else
    {
        cout << "ALERTA: No es posible sacar factorial";
    }

    return 0;
}