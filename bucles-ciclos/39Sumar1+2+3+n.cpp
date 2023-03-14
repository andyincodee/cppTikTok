/*Escriba un programa que calcule el valor de:
1 + 2 + 3 + ... + n*/
#include <iostream>
using namespace std;
int main()
{
    int numero, suma = 0;
    cout << "Hasta que numero desea operar: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        cout << i << endl;
        suma += i;
    }
    cout << "--------------------" << endl;
    cout << "La suma total es: " << suma;

    return 0;
}