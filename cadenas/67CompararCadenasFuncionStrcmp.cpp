/*Comparar cadenas - Función strcmp()
    1) Comparar si son iguales
    2) Si no son iguales, indicar cual es mayor alfabeticamente*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //Definir variables
    char cadena1[100], cadena2[100];

    //Ingresar cadenas
    cout << "Ingrese la cadena 1: ";
    cin.getline(cadena1, 100, '\n');
    cout << "Ingrese la cadena 2: ";
    cin.getline(cadena2, 100, '\n');

    //Convertir cadenas a minúsculas
    for(int i = 0; i < strlen(cadena1); i++) { //Función longitud strlen()
        cadena1[i] = tolower(cadena1[i]);       //Función conversión tolower()
    }
    for(int i = 0; i < strlen(cadena2); i++) { //Función longitud strlen()
        cadena2[i] = tolower(cadena2[i]);       //Función conversión tolower()
    }

    //Comparación en un condicional IF-ELSE
    if(strcmp(cadena1, cadena2) == 0){
        cout << "Exito. Ambas cadenas son iguales";
    } else if(strcmp(cadena1, cadena2) > 0){
        cout << "La cadena: " << cadena1 << "Es mayor";
    } else {
        cout << "La cadena: " << cadena2 << "Es mayor";
    }

    return 0;
}