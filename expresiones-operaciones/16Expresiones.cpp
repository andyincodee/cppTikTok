/*Escriba un programa que calcule las soluciones de una ecuacion de
segundo grado de la forma ax2+bx+c=0, teniendo en cuenta que:*/

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	// Definir variables
	double a, b, c;		   // coeficientes de la ecuacion
	double x1 = 0, x2 = 0; // variables para almacenar las raices de la ecuacion

	// Entrada
	cout << "Ingrese los coeficientes de la ecuacioan (a,b,c):" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	system("cls");

	// Proceso
	double discriminante = (b * b) - (4 * a * c); // calcular la discriminante

	// para: raices reales diferentes
	x1 = (-b + sqrt(discriminante)) / (2 * a);
	x2 = (-b - sqrt(discriminante)) / (2 * a);

	// Salida
	cout << "Las raices de la ecuacion son:" << endl;
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;

	return 0;
}
