/*Escribe un programa que defina un vector de numeros
y calcule si existe algún numero en el vector cuyo valor
equivale a la suma del resto de números del vector*/
#include <iostream>
using namespace std;

int main(){
    int numero[100], elementos, suma = 0;

    cout << "Ingrese la cantidad de elementos que desea tener: ";
    cin >> elementos;

    //ingreso de elementos
    for(int i = 0; i < elementos; i++){
        cout << "[" << i+1 << "] Ingrese un numero: ";
        cin >> numero[i];
    }

    //suma de elementos
    for(int i = 0; i < elementos; i++){
        suma = suma + numero[i];
    }

    //comparación
    for(int i = 0; i < elementos; i++){
        if(numero[i] == suma - numero[i]){
            cout << "Exito! el valor de suma total es igual al numero: " << numero[i] << endl;
            return 0;
        }
    }

    // Si llegamos hasta aquí, entonces no se encontró ningún número que cumpla la condición
    cout << "No se encontro ningun numero que sea igual a la suma del resto de numeros en el array." << endl;

    return 0;
}