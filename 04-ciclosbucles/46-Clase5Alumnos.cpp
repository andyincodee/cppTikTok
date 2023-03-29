/*En una clase de 5 alumnos se han realizado 3 examenes
y se requiere determinar el numero de:
a) alumnos que aprobaron todos los examenes
b) alumnos que aprobaron al menos un examen
c) alumnos que aprobaron unicamente el ultimo examen
Realice un programa que permita la lectura de los datos
y el calculo de las estadisticas*/
#include <iostream>
using namespace std;

int main() {
    int alumnos[5][3]; // matriz para almacenar las calificaciones de los 5 alumnos en los 3 exámenes
    int aprobados_todos = 0, aprobados_al_menos_uno = 0, aprobados_ultimo = 0;

    // lectura de calificaciones
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese las calificaciones del alumno " << i+1 << ":" << endl;
        for (int j = 0; j < 3; j++) {
            cin >> alumnos[i][j];
        }
    }

    // conteo de estadísticas
    for (int i = 0; i < 5; i++) {
        bool aprobado = true;
        for (int j = 0; j < 3; j++) {
            if (alumnos[i][j] < 60) {
                aprobado = false;
                break;
            }
        }
        if (aprobado) {
            aprobados_todos++;
        }
        if (alumnos[i][0] >= 60 || alumnos[i][1] >= 60 || alumnos[i][2] >= 60) {
            aprobados_al_menos_uno++;
        }
        if (alumnos[i][2] >= 60) {
            aprobados_ultimo++;
        }
    }

    // impresión de resultados
    cout << "Alumnos que aprobaron todos los examenes: " << aprobados_todos << endl;
    cout << "Alumnos que aprobaron al menos un examen: " << aprobados_al_menos_uno << endl;
    cout << "Alumnos que aprobaron unicamente el ultimo examen: " << aprobados_ultimo << endl;

    return 0;
}

//EJERCICIO RESUELTO POR CHAT GPT