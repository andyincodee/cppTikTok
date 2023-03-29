/*Escribe un programa que lea de la entrada estándar tres numeros
Despues debes leer un cuarto número e indicar si el número coincide
con alguno de los introducidos con anterioridad*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    int n4; // para comparar

    cout << "Ingrese 3 numeros: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    cout << "Ingrese el numero a comparar: ";
    cin >> n4;

    if (n4 == n1)
    {
        cout << "El numero: " << n4 << " es igual a: " << n1;
    }
    else if (n4 == n2)
    {
        cout << "El numero: " << n4 << " es igual a: " << n2;
    }
    else if (n4 == n3)
    {
        cout << "El numero: " << n4 << " es igual a: " << n3;
    }
    else
    {
        cout << "El numero: " << n4 << " es DIFERENTE";
    }

    return 0;
}