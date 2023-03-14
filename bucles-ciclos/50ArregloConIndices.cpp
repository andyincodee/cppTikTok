/* Escribe un programa que lea de la entrada estándar un vector
de números y muestre en la salida estándar los números del vector
con sus índices asociados*/
#include <iostream>
using namespace std;

int main(){
    int numeros[100], cantidad;

    cout << "Cuantos numeros desea ingresar: ";
    cin >> cantidad;

    //Ingreso de numeros
    for(int i = 0; i < cantidad; i++){
        cout << "   (" << i+1 << ") numero: ";
        cin >> numeros[i];
    }

    cout << "Los numeros con sus indices son: " << endl;
    for(int i = 0; i < cantidad; i++){
        cout << "   " << i << " ->  "  << numeros[i] << endl;
    }

    return 0;
}