/*Hacer un programa que calcule el resultado de la
siguiente expresion: 1 - 2 + 3 - 4 + 5 - 6 + ... n*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n, expresion = 0, suma = 0;

    cout << "Ingrese el valor n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        expresion = i * (-(pow(-1,i)));
        cout << "     " << expresion;
        suma += expresion;
    }

    cout << endl;
    cout << "La suma total es: " << suma << endl;

    return 0;
}