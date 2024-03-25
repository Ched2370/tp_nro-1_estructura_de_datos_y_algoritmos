#include <iostream>
#include <conio.h>
using namespace std;

/*
Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar, la suma de los cuadrados de los 10 
primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.
*/
int main() {
	cout << "\t***EJERCICIO 2B***" << endl;
	
    int num;
    int contador = 0;

    do {
        cout << "Ingrese un numero (o 0 para salir): "; cin >> num;

        if (num > 0) {
            contador++;
        }
    } while (num != 0);

    cout << "Se leyeron " << contador << " valores mayores que cero." << endl;
    
	getch();
    return 0;
}

