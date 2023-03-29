/*Realice un programa que lea de la entrada estàndar números hasta
que se introduzca un cero. En ese momento el programa debe terminar
y mostrar en la salida estándar el número de valores mayores que cero leidos*/
#include <iostream>
using namespace std;

int main()
{
    int numero, contador = 0;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > 0)
        {
            contador += 1; // contador = contador + 1;
        }
    } while (numero != 0);
    cout << "La cantidad de numeros mayores que cero leidos son: " << contador;

    return 0;
}