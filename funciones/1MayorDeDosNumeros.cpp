//Encontrar el mayor de 2 numeros
#include <iostream>
using namespace std;

//Prototipo de la función
int encontrarMaximo(int x, int y);


int main(){
    int num1, num2;
    /*int mayor;*/

    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    
    /*mayor = encontrarMaximo(num1, num2);    //primera opcion
    cout << "El numero mayor es: " << mayor;*/

    cout << "El numero mayor es: " << encontrarMaximo(num1, num2);

    return 0;
}

//Definicion de la funcion
int encontrarMaximo(int x, int y){
    int numeroMayor;

    if(x > y){
        numeroMayor = x;
    } else {
        numeroMayor = y;
    }
    return numeroMayor;
}