//Longitud de una cadenas de caracteres - Función strlen()
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //Definimos las variables
    char nombre[100];
    int longitud = 0;

    //Ingresamos cadena de caracteres
    cout << "Ingrese su nombre y apellido: ";
    cin.getline(nombre,100,'\n');

    //Calculamos la longitud
    longitud = strlen(nombre);

    //Mostramos la longitud que tiene
    cout << "La longitud que tiene es: " << longitud;

    return 0;
}