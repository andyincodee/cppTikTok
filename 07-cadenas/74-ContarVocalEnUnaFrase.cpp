/*Realice un programa que lea una cadena de caracteres de la entrada
estándar y muestre en la salida estándar cuántas ocurrencias de cada
vocal existen en la cadena*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena[200];
    int a=0, e=0, i=0, o=0, u=0;

    cout << "Digite una frase: ";
    cin.getline(cadena, 200);

    strlwr(cadena);

    int cont_cadena = strlen(cadena);
    cout << cont_cadena << endl;

    for(int i = 0; i < cont_cadena; i++){
        switch(cadena[i]){
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;   
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    cout << "La vocal A: " << a << endl;
    cout << "La vocal E: " << e << endl;
    cout << "La vocal I: " << i << endl;
    cout << "La vocal O: " << o << endl;
    cout << "La vocal U: " << u << endl;

    return 0;
}