
//Escriba un programa que lea tres numeros y determine cual de ellos es mayor
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int num1, num2, num3;
	
	cout << "Ingresa el 1 numero: "; cin >> num1; 
	cout << "Ingresa el 2 numero: "; cin >> num2;
	cout << "Ingresa el 3 numero: "; cin >> num3;
	
	//Resolucion del problema
	if(num1 > num2 && num1 > num3){
		cout << "El mayor de los tres numeros es: " << num1;
	} else if (num2 > num1 && num2 > num3){
		cout << "El mayor de los tres numeros es: " << num2;
	} else {
		cout << "El mayor de los tres numeros es: " << num3;
	}
	//fin de la solución
	
	return 0;
}
