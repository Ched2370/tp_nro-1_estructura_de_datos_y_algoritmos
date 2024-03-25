#include <iostream>
#include <conio.h>
using namespace std;

/*
Ejercicio 8: En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción 
el número de: 
a) Alumnos que aprobaron todos los exámenes. 
b) Alumnos que aprobaron al menos un examen. 
c) Alumnos que aprobaron únicamente el último examen.
*/

int main() {
	cout << "\t***EJERCICIO 8B***" << endl;
    const int NUM_ALUMS = 5;
    int calif[NUM_ALUMS][3]; 
    int opc;
    int todos = 0;
    int al_menos_uno = 0;
    int ultimo = 0;

    for (int i = 0; i < NUM_ALUMS; ++i) {
        cout << "Ingrese las calificaciones del alumno " << i + 1 << " para los tres examenes: (escala del 1 - 10)" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "Examen " << j + 1 << ": "; cin >> calif[i][j];
        }
    }

	do{
		
	    cout << "\nSeleccione una opcion:" << endl;
	    cout << "1) Alumnos que aprobaron todos los examenes." << endl;
	    cout << "2) Alumnos que aprobaron al menos un examen." << endl;
	    cout << "3) Alumnos que aprobaron únicamente el ultimo examen." << endl;
	    cout << "4) Salir." << endl;
	    cout << "Opcion: "; cin >> opc;

	    switch (opc) {
	        case 1:
	            for (int i = 0; i < NUM_ALUMS; ++i) {
	                if (calif[i][0] >= 6 && calif[i][1] >= 6 && calif[i][2] >= 6) {
	                    todos++;
	                }
	            }
	            cout << "\nAlumnos que aprobaron todos los examenes: " << todos << endl;
	            break;
	        case 2:
	            for (int i = 0; i < NUM_ALUMS; ++i) {
	                if (calif[i][0] >= 6 || calif[i][1] >= 6 || calif[i][2] >= 6) {
	                    al_menos_uno++;
	                }
	            }
	            cout << "\nAlumnos que aprobaron al menos un examen: " << al_menos_uno << endl;
	            break;
	        case 3:
	            for (int i = 0; i < NUM_ALUMS; ++i) {
	                if (calif[i][2] >= 6 && (calif[i][0] < 6 && calif[i][1] < 6)) {
	                    ultimo++;
	                }
	            }
	            cout << "\nAlumnos que aprobaron unicamente el ultimo examen: " << ultimo << endl;
	            break;
	        case 4:
	        	cout << "\nPresine  una tecla para finalizar.";
	        	break;
	        default:
	            cout << "\nOpcion no valida." << endl;
	    }
	}while (opc != 4);
    
	getch();
    return 0;
}

