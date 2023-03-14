/*Desarrolle un programa que lea de la entrada estándar
un vector de enteros y determine el mayor elemento del vector*/
#include <iostream>
using namespace std;
int main(){
    int numeros[100], elementos, mayor = 0;

    cout << "Cuantos elementos tendra su arreglo: ";
    cin >> elementos;

    for(int i = 0; i < elementos; i++){
        cout << "Ingrese un elemento [" << i+1 << "]: ";
        cin >> numeros[i];
    }

    for(int i = 0; i < elementos; i++){
        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }

    cout << endl << "El numero mayor del arreglo es: " << mayor;

    return 0;
 }