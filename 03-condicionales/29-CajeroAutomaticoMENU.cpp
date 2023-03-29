/*Hacer un menu que considere las siguientes opciones:
    1. Cubo de un número
    2. Numero par o impar
    3. Salir*/

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    int num;
    int cubo;
    cout << "----------------" << endl;
    cout << "Menu de Opciones" << endl;
    cout << "----------------" << endl;
    cout << "   1. Cubo de un numero" << endl;
    cout << "   2. Numero par o impar" << endl;
    cout << "   3. Salir del menu" << endl;
    cout << "----------------" << endl;
    cout << "   elija una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "-- CUBO DE UN NUMERO -- " << endl;
        cout << "Ingrese un numero: ";
        cin >> num;
        cubo = num * num * num;
        cout << "El cubo de " << num << " es: " << cubo;
        break;

    case 2:
        cout << "-- NUMERO PAR O IMPAR -- " << endl;
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num == 0)
        {
            cout << "ALERTA: El numero es cero";
        }
        else if (num % 2 == 0)
        {
            cout << "El numero es par";
        }
        else
        {
            cout << "El numero es impar";
        }
        break;

    case 3:
        break;

    default:
        cout << "ERROR: Opcion Incorrecta";
        break;
    }

    return 0;
}