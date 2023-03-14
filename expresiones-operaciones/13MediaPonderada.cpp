/*La calificación final de un estudiante es la media ponderada de tres notas: 
La nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 
60% y la nota de participación que cuenta el 10% restante. Escriba un programa que 
lea de la entrada estándar las tres notas de un alumno y escriba en la salida
estándar su nota final*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	//Definir variables
	float nPracticas, nTeorica, nParticipacion, resultado = 0;
	
	//Entrada
	cout << "Estimado estudiante, ingrese las siguientes notas:" << endl;
	cout << "Nota Practicas: "; cin >> nPracticas;
	cout << "Nota Teorica: "; cin >> nTeorica;
	cout << "Nota Participacion: "; cin >> nParticipacion;
	system("cls");
	
	//Proceso
		//nPracticas = 30%
		//nTeorica = 60%
		//nParticipacion = 10%
	
	resultado = (nPracticas * 0.3) + (nTeorica * 0.6) + (nParticipacion * 0.1);
		//se esta multiplicando con el porcentaje para solo sumar y no complicarnos la vida jeje
	
	//Salida
	cout << "La media ponderada de tres notas es: " << resultado;
	
	return 0;
}
