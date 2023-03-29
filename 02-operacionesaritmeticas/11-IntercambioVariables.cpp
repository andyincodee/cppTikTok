//Ejercicio Intercambio de valores entre 2 variables
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	//Definir variables
	int a, b, aux;
	
	//Entrada
	cout << "Ingrese valores en las siguientes variables" << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	system("cls");
	
	//Proceso
	cout << "Intercambiando variables...";
	getch();
	system("cls");
	
	aux = a;
	a = b;
	b = aux;
	
	//Salida
	cout << "a: " << a << endl;	
	cout << "b: " << b << endl;	
	
	return 0;
}
