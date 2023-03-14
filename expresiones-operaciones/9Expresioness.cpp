//Escribe la siguiente expresión matemática como expresión en C++
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//Definir variables
	float a,b,c,d,e,f, resultado = 0;
	
	//Entrada
	cout << "Ingrese un numero en las siguientes variables" << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	cout << "d: "; cin >> d;
	cout << "e: "; cin >> e;
	cout << "f: "; cin >> f;
	system("cls");
	
	//Proceso
	resultado = (a+(b/c)) / (d+(e/f));
	
	//Salida
	cout << "****************************" << endl;
	cout << "El resultado es: " << 	resultado << endl;
	cout << "****************************" << endl;
	getch();
	
	return 0;
}
