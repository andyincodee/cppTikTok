/*Escribe un programa que defina un vector de números y 
calcule la multiplicación acumulada de sus elementos*/
#include <iostream>
using namespace std;

int main(){
    int numeros[5] = {1,2,3,4,5};
    int multiplicacion = 1;

    for(int i = 0; i < 5; i++){
        multiplicacion = multiplicacion * numeros[i];
    }
    cout << endl;
    cout << "   La multiplicacion del array es: " << multiplicacion;

    return 0;
}