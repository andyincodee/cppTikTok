//Escribe la siguiente expresi�n como expresi�n en C++
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	//Definir variables
	float a, b, resultado;
	
	//Ingreso de datos
	cout << "Ingrese un valor para a y b" << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	
	//Proceso de expresi�n
	resultado = (a/b) + 1;
	
	//Salida
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "La respuesta es: " << resultado << endl;
	cout << "-----------------------" << endl;
	
	return 0;
}
