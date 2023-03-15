/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre
la diagonal principal de la matriz*/
#include <iostream>
using namespace std;
int main(){
    int num[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

    for(int i = 0; i < 3; i++){         //filas
        for(int j = 0; j < 3; j++){     //columnas
            cout << num[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl << "Ciclo que muestra la diagonal principal de la matriz" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                cout << num[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}