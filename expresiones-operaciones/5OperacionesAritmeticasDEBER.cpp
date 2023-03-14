/*Escribe un programa que lea de la entrada estandar el precio
de un producto y muestre en la salida estándar el precio del 
producto al aplicarle el IVA:12%*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//Definimos las variables
	float pproducto, pproductoiva;
	
	//Pedimos datos
	cout << "Precio del producto: "; cin >> pproducto;
	
	//Proceso
	pproductoiva = (pproducto * 0.12) + pproducto;
	
	//Salida
	system("cls");
	cout << "-------------------------------" << endl;
	cout << "--------PRECIOS CON IVA--------" << endl;
	cout << "-------------------------------" << endl;
	cout << "Precio sin IVA: " << pproducto << endl;
	cout << "Precio con IVA: " << pproductoiva << endl;
	getch();
	
	return 0;
}


