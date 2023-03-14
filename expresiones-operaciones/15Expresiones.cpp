/*Realice un programa que calcule el valor que toma la siguiente
funcion para unos valores dados de x e y:*/
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main(){
	//Definir variables
	float x, y, resultado = 0;
	
	//Entrada
	cout << "Ingrese los siguientes datos:" << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;
	
	//Proceso
	resultado = (sqrt(x)) / (pow(y,2)-1);
	
	//Salida
	cout << "El resultado de la expresion es: " << resultado;
	getch();
	
	return 0;
}
