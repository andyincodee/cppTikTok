//Cadenas de caracteres
//1     cin >> nombre;
//2     gets(nombre);
//3     cin.getline(nombre,10,'\n');

#include <iostream>
#include <string>
using namespace std;
int main(){
    //Pedir al usuario que digite la cadena de caracteres
    char nombre[10];
        cout << "Digite su nombre: ";
        cin.getline(nombre,10,'\n');
        
        //impresión
        cout << nombre;

    return 0;
}