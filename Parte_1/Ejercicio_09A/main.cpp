#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
/* Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. Luego determine y 
muestre cu�l de ellas llego primero.
 */

int main() {
	cout << "\t***EJERCICIO 9***" << endl;
	
    string nombre1, nombre2;
    double tiempo1, tiempo2;

    cout << "Ingrese el nombre de la primera nadadora: "; getline(cin, nombre1);
    cout << "Ingrese el tiempo de nado de " << nombre1 << " en segundos: "; cin >> tiempo1;

    cin.ignore(); // para cuando se mezclan tipos de datos, si no se coloca puede "salto de linea no consumido" lo provocaria que se lea como una cadena vacia
 
    cout << "Ingrese el nombre de la segunda nadadora: "; getline(cin, nombre2);
    cout << "Ingrese el tiempo de nado de " << nombre2 << " en segundos: "; cin >> tiempo2;

    if (tiempo1 < tiempo2) {
        cout << nombre1 << " llego primero." << endl;
    } else if (tiempo2 < tiempo1) {
        cout << nombre2 << " llego primero." << endl;
    } else {
        cout << "Ambas nadadoras llegaron al mismo tiempo." << endl;
    }
    
    getch();
	return 0;
}
