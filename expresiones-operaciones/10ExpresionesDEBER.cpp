//Escribe la siguiente expresión matemática como expresión en C++
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//Definir variables
	float a,b,c,d, resultado = 0;
	
	//Entrada
	cout << "Ingrese un numero en las siguientes variables" << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	cout << "d: "; cin >> d;
	
	//Proceso
	resultado = a + (b/(c-d));
	
	//Salida
	cout << "*************************" << endl;
	cout << "El resultado es: " << resultado << endl;
	cout << "*************************" << endl;
	
	return 0;
}
