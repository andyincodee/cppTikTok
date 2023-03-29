//Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas y decir si son iguales o no
//Para comparar se usa la fución: strcmp()
//Para convertir a mayusculas se usa la función: strupr()
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //definir variables
    char cadena1[200], cadena2[200];

    //ingresamos datos
    cout << "Ingrese la primera frase: ";
    cin.getline(cadena1, 200);
    cout << "Ingrese la segunda frase: ";
    cin.getline(cadena2, 200);

    //minusculas a MAYSCULAS
    strupr(cadena1);
    strupr(cadena2);

    //mostramos en MAYUSCULAS
    cout << "**************" << endl;
    cout << cadena1 << endl;
    cout << cadena2 << endl;
    cout << "**************" << endl;
    
    //Comparar
    if(strcmp(cadena1, cadena2) == 0){
        cout << "Son iguales";
    } else{
        cout << "No son iguales";
    }

    return 0;
}