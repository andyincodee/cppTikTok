/*Plantillas de Funcion: nos permite trabajar con cualquier tipo de dato
Sacar el valor absoluto de un número*/
#include <iostream>
using namespace std;

//Prototipo de Funcion
template <class TIPOD>  //prefijo de la plantilla
void mostrarAbsoluto(TIPOD numero);

int main(){
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrarAbsoluto(num1);
    mostrarAbsoluto(num2);
    mostrarAbsoluto(num3);

    return 0;
}

//Definicion de funcion
template <class TIPOD>
void mostrarAbsoluto(TIPOD numero){
    if(numero < 0){
        numero = numero * -1;
    }

    cout << "El valor absoluto del numero es: " << numero << endl;
}