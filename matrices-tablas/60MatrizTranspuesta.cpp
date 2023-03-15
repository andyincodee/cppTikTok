/*Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
La matriz transpuesta es aquella en la que la columna i era la fila i de la matriz original

1   2   3           1   4   7
4   5   6   --->    2   5   8    
7   8   9           3   6   9
*/
#include <iostream>
using namespace std;
int main(){
    int num[3][3];

    //Ingreso de elementos: filas y columnas
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> num[i][j];
        }
    }

    cout << endl << "-----------------------------" << endl;
    cout << "     MATRIZ NORMAL" << endl;
    cout << "-----------------------------" << endl;
    //Impresión: Matriz Normal
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << num[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl << "-----------------------------" << endl;
    cout << "     MATRIZ TRANSPUESTA" << endl;
    cout << "-----------------------------" << endl;
    //Impresión: Matriz Transpuesta
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << num[j][i] << "  ";
        }
        cout << endl;
    }

    return 0;
}