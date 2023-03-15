/*Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, posteriormente mostrar la matriz en pantalla*/
#include <iostream>
using namespace std;
int main(){
    int numero[100][100], filas, columnas;

    //pedir al usuario la cantidad de filas y columnas
    cout << "Ingrese la cantidad de filas: ";
    cin >> filas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> columnas;

    //almacenar elementos en la matriz
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Digite un numero en: [" << i << "]" << "[" << j << "]: ";
            cin >> numero[i][j];
        }
    }

    //mostrar la matriz
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << numero[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}