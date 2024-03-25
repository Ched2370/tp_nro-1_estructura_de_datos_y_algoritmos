#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

/* 
Ejercicio 8: La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que 
cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su 
nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar. 
*/

int main() {
	cout << "\t***EJERCICIO 8***" << endl;
	
	int cantAlums;
    float practicas, teorica, participacion, notaFinal;

    cout << "Ingrese la cantidad de alumnos a calificar: ";
    cin >> cantAlums;

    for (int i = 1; i <= cantAlums; ++i) {
        cout << "\nAlumno " << i << ":" << endl;
        cout << "Ingrese la nota de practicas: ";
        cin >> practicas;
        cout << "Ingrese la nota teorica: ";
        cin >> teorica;
        cout << "Ingrese la nota de participacion: ";
        cin >> participacion;

        notaFinal = (practicas * 0.3) + (teorica * 0.6) + (participacion * 0.1);

		cout << fixed << setprecision(2);
        cout << "La nota final del alumno " << i << " es: " << notaFinal << endl;
    }
    
    getch();
	return 0;
}
