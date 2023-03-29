#include <iostream>
using namespace std;

int main(){
	int numero, dato = 5;
	
	cout << "Digite un numero: ";
	cin >> numero;
	
	//Condicion
	if (numero <= dato){
		cout << "El numero es MENOR o igual a 5";
	} else {
		cout << "El numero es MAYOR a 5";
	}
	
	return 0;
}
