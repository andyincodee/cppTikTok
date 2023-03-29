/*Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido
de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer
vector seguido por los elementos del segundo vector. 
Muestre el contenido del nuevo vector en la salida estándar*/
#include <iostream>
using namespace std;

int main(){
    char letra1[] = {'a','b','c','d','e'};
    char letra2[] = {'f','g','h','i','j'};
    char letra3[10];

    //Copiamos: letra1 -> letra3
    for(int i = 0; i < 5; i++){
        letra3[i] = letra1[i];
    }

    //Copiamos: letra2 -> letra3
    for(int i = 5; i < 10; i++){
        letra3[i] = letra2[i-5];
    }

    //Nuevo vector: letras3
    for(int i = 0; i < 10; i++){
        cout << letra3[i] << "      ";
    }

    return 0;
}