/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros
aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en pantalla*/
#include <iostream>
using namespace std;
int main(){
    int num[100][100], filas, columnas;
    int newnum[100][100];

    //Preguntamos al usuario la cantidad de filas y columnas
    cout << "Cuantas filas desea: "; cin >> filas;
    cout << "Cuantas columnas desea: "; cin >> columnas;

    //Llenar de numeros aleatorios
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingrese los valores en: [" << i << "] [" << j << "]: ";
            cin >> num[i][j];
        }
    }

    //Copiamos a una nueva matriz
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            newnum[i][j] = num[i][j];
        }
    }

    //Mostramos la nueva matriz por pantalla
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << newnum[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}