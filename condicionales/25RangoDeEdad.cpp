/*Escriba un programa que solicite una edad (un entero) e indique en la
salida estándar si la edad introducida está en el rango [18-25]*/
#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese una edad: ";
    cin >> edad;

    if ((edad >= 18) && (edad <= 25))
    {
        cout << "Se encuentra en el rango";
    }
    else
    {
        cout << "ALERTA: No se encuentra en el rango";
    }

    return 0;
}