/*Crear un programa que permita el ingreso de 2 números enteros e imprima la suma, resta
multiplicación y división*/

#include <iostream>
using namespace std;

int main(){
	//Definimos las variables
	int n1, n2, suma = 0, resta = 0, multiplicacion = 0;
	float division = 0; //ponemos float porque hay divisiones que dan como resultado: decimales
	
	//Pedimos datos al usuario
	cout << "Ingrese un numero" << endl;
	cout << "numero 1: "; cin >> n1;
	cout << "numero 2: "; cin >> n2;
	
	//Hacemos la operación
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	//Mostramos por pantalla
	cout << endl << endl;
	cout << "+-----------------------+" << endl;
	cout << n1 << " + " << n2 << " = " << suma << endl;
	cout << n1 << " - " << n2 << " = " << resta << endl;
	cout << n1 << " x " << n2 << " = " << multiplicacion << endl;
	cout << n1 << " / " << n2 << " = " << division << endl;
	cout << "+-----------------------+" << endl;
	
	return 0;
}
