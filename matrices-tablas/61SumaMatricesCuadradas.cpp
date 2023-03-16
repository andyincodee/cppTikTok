/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3*/
#include <iostream>
using namespace std;
int main(){
    int matrizA[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int matrizB[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int matrizC[3][3];

    //Se suman las 2 matrices y se almacena en la matrizC
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //Se muestra por pantalla el resultado: matrizC
    cout << "La suma de las dos matrices es:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrizC[i][j] << "      ";
        }
        cout << endl;
    }

    return 0;
}