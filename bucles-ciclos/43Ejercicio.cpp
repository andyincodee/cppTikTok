/*Escriba un programa que calcule el valor de:
2^1 + 2^2 + ... + 2^n*/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main(){
    double n, suma = 0, exponente = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << endl;

    for(double i = 1; i <= n; i++){
        exponente = pow(2,i);   // exponente = 2
        cout << "   -> " << exponente << endl;  
        suma += exponente;  // suma = suma + exponente | 2
    }

    cout << "----------------------" << endl;
    cout << "La suma total es: " << suma;
    return 0;
    getch();
}