/*Escribe un programa que defina un vector de numeros
y muestre en la salida estándar el vector
en orden inverso del ultimo al primer elemento*/

#include <iostream>
using namespace std;

int main(){
    int numeros[9] = {1,2,3,4,5,6,7,8,9};

    //Salida en ORDEN ASCENDENTE
    for(int i = 0; i < 9; i++){
        cout << "   " << i << " -> " << numeros[i] << endl;
    }

    //Salida en ORDEN DESCENDENTE
    for(int i = 8; i >= 0; i--){
        cout << "   " << i << " -> " << numeros[i] << endl;
    }

    return 0;
}