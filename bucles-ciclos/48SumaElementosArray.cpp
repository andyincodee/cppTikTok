/*Escriba un programa que defina un vector de números y calcule la suma de sus elementos*/
#include <iostream>
using namespace std;

int main(){
    int numeros[5] = {1,2,3,4,5}, suma = 0;

    //recorre el vector
    for(int i = 0; i < 5; i++){
        //realiza la suma de los elementos
        suma = suma + numeros[i];   //suma =+ numeros[i];
    }

    cout << endl;
    cout << "   La suma total del vector es: " << suma;

    return 0;
}