/*Escriba un programa que lea la nota final de cuatro alumnos y
calcule la nota final media de los cuatro alumnos*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//Definir variables
	float n1, n2, n3, n4, notaFinal;
	
	//Entrada
	cout << "Ingrese la nota final de los cuatro estudiantes" << endl;
	cout << "1 estudiante: "; cin >> n1;
	cout << "2 estudiante: "; cin >> n2;
	cout << "3 estudiante: "; cin >> n3;
	cout << "4 estudiante: "; cin >> n4;
	
	//Proceso
	system("cls");
	notaFinal = (n1 + n2 + n3 + n4) / 4;
	
	//Salida
	cout << "La nota media de los cuatro alumnos es: " << notaFinal;
	
	return 0;
}