/*Escriba un programa que lea valores enteros hasta que
se introduzca un valor en el rango [20-30] o se introduzca
el valor cero. El programa debe entregar la suma de los
valores mayores a 0 introducidos*/
#include <iostream>
using namespace std;
int main()
{
    int numero, acumulador = 0;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > 0)
        {                         // suma todos los numeros > cero
            acumulador += numero; // acumulador = acumulador + numero;
        }

    } while ((numero < 20) || (numero > 30) && (numero != 0));
    cout << "**********************" << endl;
    cout << "La suma de los valores mayores > cero es: " << acumulador;
    return 0;
}