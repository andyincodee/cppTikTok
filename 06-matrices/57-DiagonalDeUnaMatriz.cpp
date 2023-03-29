/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre
la diagonal principal de la matriz*/
#include <iostream>
using namespace std;
int main(){
    int matriz[3][3];

    //Ingreso de datos en la matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Ingrese un numero ["<<i<<"]["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }

    cout << endl << "-------------------------------" << endl;
    //Mostrar la matriz original
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl << "-------------------------------" << endl;
    //Mostrar los elementos en diagonal
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                cout << matriz[i][j] << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}