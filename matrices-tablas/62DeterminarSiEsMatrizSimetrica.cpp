/*Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta*/
#include <iostream>
using namespace std;
int main(){
    int matriz[100][100];
    int filas, columnas;
    char bandera = 'F';

    cout << "Ingrese la cantidad de filas: ";
    cin >> filas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> columnas;

    //El usuario ingresa los valores a la matriz
    if(filas == columnas){
        for(int i = 0; i < filas; i++){
           for(int j = 0; j < columnas; j++){
                cout << "Ingrese un numero [" << i << "] [" << j << "]: ";
                cin >> matriz[i][j];
            }
        }
    }else{
        cout << "---------------------" << endl;
        cout << "Error. No es Cuadrada" << endl;
        cout << "---------------------" << endl;
        return 0;
    }
    
    //Imprimimos la matriz: normal y simétrica
    cout << "-------------" << endl;
    cout << "Matriz Normal" << endl;
    cout << "-------------" << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << matriz[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "------------------" << endl;
    cout << "Matriz Transpuesta" << endl;
    cout << "------------------" << endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << matriz[j][i] << "   ";
        }
        cout << endl;
    }

    //Determinamos si es simetrica o no con banderas
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(matriz[i][j] == matriz[j][i]){
                bandera = 'V';
            }else{              //En caso de que sus indices no sean iguales es necesario poner un SI NO
                bandera = 'F';  //y cambiar de estado verdadero a falso en la bandera
                break;          //finalizamos la ejecución del bucle o instrucción para que no siga
            }
        }
    }
    
    if(bandera == 'V'){
        cout << "------------------" << endl;
        cout << "Exito. Es Simetrica" << endl;
        cout << "------------------" << endl;
    }else{
        cout << "------------------" << endl;
        cout << "Error. No es Simetrica" << endl;
        cout << "------------------" << endl;
    }

    return 0;
}