/*Hacer un programa que pida al usuario que digite una cadena
de caracteres, luego verificar la longitud de la cadena, y si
esta supera a 10 caracteres mostrarla en pantalla, caso
contrario no mostrarla*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //Definir variables
    char parrafo[100];
    int longitud = 0;

    //Pedimos la cadena
    cout << "Ingrese un texto: ";
    cin.getline(parrafo, 100, '\n');

    //Calculamos la longitud
    longitud = strlen(parrafo);

    //Condicional
    if(longitud > 10){
        cout << "El texto que el usuario ingreso es:" << endl;
        cout << parrafo;
    } else {
        cout << "El texto debe ser mas largo :(" << endl;
    }

    return 0;
}
