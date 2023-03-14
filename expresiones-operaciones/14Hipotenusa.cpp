/*Escriba un programa que lea de la entrada estándar los dos catetos
de un triángulo rectángulo y escriba en la salida estándar su
hipotenusa*/
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main(){
	//Definir variables
	double catA, catB, hipotenusa_metodo1 = 0, hipotenusa_metodo2 = 0;
	
	//Entrada
	cout << "Ingrese los catetos:" << endl;
	cout << "Cateto A: "; cin >> catA;
	cout << "Cateto B: "; cin >> catB;
	system("cls");
	
	//Proceso
	hipotenusa_metodo1 = (sqrt((pow(catA,2)) + (pow(catB,2))));
	hipotenusa_metodo2 = (sqrt((catA * catA) + (catB * catB)));
	
	//Salida
	cout << "El resultado de cada metodo: " << endl;
	cout << "Metodo 1: " << hipotenusa_metodo1 << endl;
	cout << "Metodo 2: " << hipotenusa_metodo2 << endl;
	getch();
	
	return 0;
}
