//Pasar una palabra de MAYUSCULAS a minusculas - Funcion strlwr()
/*Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza
por la letra A, convertir su nombre a minusculas, caso
contrario no convertirlo*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char nombre[200];
    cout << "Ingrese su nombre: ";
    cin.getline(nombre, 200);

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout << "Su nombre en minusculas es: " << nombre << endl;
    } else {
        cout << "Su nombre: " << nombre << " no empieza con la letra 'A'";
    }

    return 0;
}