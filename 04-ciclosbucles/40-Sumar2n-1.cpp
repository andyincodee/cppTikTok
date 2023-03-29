/*Escriba un programa que calcule el valor de:
1 + 3 + 5 + ... + 2n-1*/
#include <iostream>
using namespace std;
int main()
{
    int numero, suma = 0, operacion = 0;

    cout << "Hasta que 2n-1 desea operar: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        operacion = (2 * i) - 1;   // obtenemos el 2n-1
        cout << operacion << endl; // imprimimos el 2n-1
        suma += operacion;         // sumamos los valores 2n-1
    }

    cout << "---------------------" << endl;
    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}