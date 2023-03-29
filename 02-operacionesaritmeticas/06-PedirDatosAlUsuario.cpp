/* Realice un programa que lea de la entrada estándar los
siguientes datos de una persona:

	Edad: dato de tipo ENTERO
	Sexo: dato de tipo CARACTER
	Altura en metros: dato de tipo REAL
	
	Despues de leer, el programa debe mostrarlos en la salida estandar*/
	
#include <iostream>
using namespace std;

int main(){
	//Definimos los tipos de datos
	int edad;
	char sexo[20];
	float altura;
	
	//Obtenemos los datos
	cout << "Digite su Edad: "; cin >> edad;
	cout << "Escriba su Sexo: "; cin >> sexo;
	cout << "Digite su Altura: "; cin >> altura;
	
	//Imprimir los datos
	system("cls");
	cout << endl;
	cout << "Edad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Altura: "<< altura << endl;
	
	return 0;
}
