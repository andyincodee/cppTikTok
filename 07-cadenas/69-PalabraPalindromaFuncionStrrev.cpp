/*Función strrev() -> Invierte la cadena de caracteres
Hacer un programa que determine si una palabra es palíndroma*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena[200];
    char copycadena[200];

    //Ingresamos la palabra
    cout << "Ingrese la palabra para verificar: ";
    cin.getline(cadena, 200, '\n');

    //Copiaamos la palabra original
    strcpy(copycadena, cadena);

    //invertimos la palabra copiada
    strrev(copycadena);

    //Verificamos si es palíndroma
    if(strcmp(copycadena, cadena) == 0){
        cout << "Exito!. Es palindromo";
    } else {
        cout << "Error!. No es palindromo";
    }

    return 0;
}