/*Hacer una matriz de tipo entera de 2x2, llenarla de numeros
y luego copiar todo su contenido hacia otra matriz*/
#include <iostream>
using namespace std;
int main(){
    int num[2][2] = {{1,2} , {3,4}};
    int newnum[2][2];

    //Copiamos el contenido a la nueva matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            newnum[i][j] = num[i][j];
        }
    }

    //Mostramos la nueva matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << newnum[i][j]  << "  ";
        }
        cout << endl;
    }

    return 0;
}