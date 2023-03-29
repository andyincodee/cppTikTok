/*Escriba un programa que tome cada 4 horas la temperatura
exterior, leyéndola durante un periodo de 24 horas. Es decir,
debe leer 6 temperaturas. Calcule la temperatura media del día,
la temperatura más alta y la más baja*/
#include <iostream>
using namespace std;

int main()
{
    float temperatura, temperaturaALTA = 0, temperaturaBAJA = 9999;
    float contador = 0, temperaturaMEDIA;

    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura: ";
        cin >> temperatura;

        if (temperatura > temperaturaALTA)
        {
            temperaturaALTA = temperatura; // temperatura alta
        }
        if (temperatura < temperaturaBAJA)
        { // temperatura baja
            temperaturaBAJA = temperatura;
        }

        contador += temperatura; // para sacar la media del dia
    }

    cout << "---------------------------" << endl;
    cout << "Temperatura Alta: " << temperaturaALTA << endl;
    cout << "Temperatura Baja: " << temperaturaBAJA << endl;
    cout << "Temperatura MEDIA: " << contador / 6;

    return 0;
}