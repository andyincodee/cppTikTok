/*Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, posteriormente mostrar la matriz en pantalla*/
#include <iostream>
using namespace std;
int main(){
    int matriz[100][100];
    int filas, columnas;
    
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    //Ingresamos datos a la matriz
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    //Mostramos la matriz
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << matriz[i][j] << "   ";
        }
        cout << endl;   //ENDL para que de un salto de línea la matriz
    }

    return 0;
}