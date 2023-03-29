/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
multiplicados x2 y muestre el segundo arreglo*/
#include <iostream>
using namespace std;
int main(){
    int numeros[5], multiplicacion[5];
    
    //recopilacion de elementos
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el numero [" << i+1 << "]: ";
        cin >> numeros[i];
    }

    //multiplicación x2
    cout << "--------------------------" << endl;
    for(int i = 0; i < 5; i++){
        multiplicacion[i] = numeros[i]*2;
        cout << "-> " << numeros[i] << " x 2 = " << multiplicacion[i] << endl;
    }

    //imprime el nuevo vector
    cout << "--------------------------" << endl;
    cout << "El nuevo vector es: " << endl;
    cout << "--------------------------" << endl;

    for(int i = 0; i < 5; i++){
        cout << multiplicacion[i] << "  ";
    }
    return 0;
}