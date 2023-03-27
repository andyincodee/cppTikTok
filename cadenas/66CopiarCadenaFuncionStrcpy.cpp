//Copiar el contenido de una cadena a otra - Funcion strcpy()
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //Definir variables
    char nombre1[100], nombre2[100];

    //Ingresar texto
    cout << "Ingrese un texto: ";
    cin.getline(nombre1, 100, '\n');

    //Copiar texto nombre1 -> nombre2
    strcpy(nombre2, nombre1);

    //Imprimir nombre2
    cout << "*******************" << endl;
    cout << nombre2;

    //La función solo COPIA pero no TRASPASA el contenido... verificamos
    cout << "\n*******************" << endl;
    cout << nombre1;


    return 0;
}