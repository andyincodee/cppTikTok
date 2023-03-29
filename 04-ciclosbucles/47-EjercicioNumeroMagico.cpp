/*Realice un programa  que solicite al usuario que piense un número 
entero entre el 1 y el 100. El programa debe generar un numero aleatorio
en ese mismo rango [1-100], e indicarle al usuario si el número que digitó
es menor o mayor al número aleatorio, así hasta que lo adivine. y por ultimo
mostrarle el número de intentos que le llevo.

#include <time.h>
variable = limiteInferior + rand() % (limiteSuperior +1 - limiteInferior);*/

#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int numero, datoMagico, cont = 0;

    datoMagico = 1 + rand() % (100 +1 - 1);

    do{
        //pedimos que adivine el numero
        cout << "   Adivine un numero: ";
        cin >> numero;

        if(numero > datoMagico){
            cout << "      -> ingrese un numero: MENOR" << endl;
        } else if(numero < datoMagico){
            cout << "      -> ingrese un numero: MAYOR" << endl;
        }

        //Cantidad de veces que intenta
        cont++;
    }while(numero != datoMagico);

    cout << endl;
    cout << "   ------------------------------------" << endl;
    cout << "   FELICIDADES!! Adivinaste el numero." << endl;
    cout << "   Numero de intentos: " << cont;

}