//Añadir o concatenar una cadena con otra - Función strcat()
/*Crear una cadena que tenga la sguiente frase, "Hola que tal, "
luego crear otra cadena para preguntarle al usuario su nombre,
por ultimo añadir el nombre al final de la primera cadena y
mostrar el mensaje completo "Hola que tal (NombredeUsuario)"*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char frase[] = "Hola que tal, ";
    char nombre[100];
    char fraseCompleta[200];

    cout << "Ingrese su nombre y apellido: ";
    cin.getline(nombre, 100, '\n');

    //Copiamos 'Hola que tal' a la variable fraseCompleta
    strcpy(fraseCompleta, frase);

    //Agregamos el nombre a la frase Completa -> Concatenamos
    strcat(fraseCompleta, nombre);

    //Imprimimos por pantalla
    cout << "************************" << endl;
    cout << fraseCompleta << endl;

    return 0;
}