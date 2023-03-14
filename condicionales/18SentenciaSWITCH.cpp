//Uso del Condicional - La Sentencia Switch
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int opcion;
	
	//Entrada
	cout << "Seleccione una opcion:" << endl;
	cout << "	1. Decir: Hola Mundo" << endl;
	cout << "	2. Decir: Mi nombre es VOJA" << endl;
	cout << "	3. Decir: Dale like y comparte" << endl;
	cin >> opcion;
	system("cls");
	
	//Proceso y Salida
	switch(opcion){
		case 1:
			cout << "Hola Mundo";
			break;
		case 2:
			cout << "Mi nombre es VOJA";
			break;
		case 3:
			cout << "Dale like y comparte";
			break;
		default:
			cout << "ERROR: La opcion no existe";
			break;
	}
	
	return 0;
}
