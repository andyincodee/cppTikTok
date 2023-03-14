//Escriba un programa que lea dos números y determine cuál de ellos es el mayor
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//Definir variables
	int numeroA, numeroB;
	
	//Entrada
	cout << "Ingrese el numero A: "; cin >> numeroA;
	cout << "Ingrese el numero B: "; cin >> numeroB;
	
	//Proceso y Salida
	if (numeroA > numeroB){
		cout << "El numero: " << numeroA << " es mayor que " << numeroB;
	} else {
		cout << "El numero: " << numeroB << " es mayor que " << numeroA;
	}
	
	return 0;
}
