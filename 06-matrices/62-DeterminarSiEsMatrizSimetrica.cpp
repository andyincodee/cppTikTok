/*Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta*/
#include <iostream>
using namespace std;
int main(){
    int matriz[100][100], filas, columnas;
    char bandera = 'V';

    cout << "Ingrese la cantidad de filas que tendra su matriz: ";
    cin >> filas;
    cout << "Ingrese la cantidad de columnas que tendra su matriz: ";
    cin >> columnas;

    if(filas == columnas){  //Si es cuadrada se realiza el ejercicio
        //ingresar numeros en la matriz
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas;  j++){
                cout << "Ingrese un # en ["<<i<<"]["<<j<<"]: ";
                cin >> matriz[i][j];
            }
        }

        //comprobamos si es simetrica
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas;  j++){
                if(matriz[i][j] != matriz[j][i]){
                    bandera = 'F';
                    break;  //sale del ciclo enseguida que su valor sea Falso
                }
            }
        }

        //anunciamos nuestro resultado
        if(bandera == 'V'){
            cout << "Exito! La matriz es simetrica";
        }else{
            cout << "Chale! No es simetrica :c";
        }

    } else {    //Sino, se indica que no es simetrica
        cout << "No es una matriz cuadrada, por lo tanto no es SIMETRICA.";
    }

    return 0;
}