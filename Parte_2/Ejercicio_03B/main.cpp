#include <iostream>
#include <conio.h>
using namespace std;

/*
Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar, la suma de los cuadrados de los 10 
primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.
*/

int main() {
	cout << "\t***EJERCICIO 3B***" << endl;
	
    int suma = 0, a = 0, cont = 0;

    do {
    	cout << "\ningrese el valor de la variable: "; cin >> a;
    	if(a >= 0){
    		suma += a * a;
    		cont++;
		} else {
			cout << "\nHa ingresado un valor invalido..." << endl;
			cout << "Presione una tecla para continuar..." << endl;
			getch();
		}
    }while(cont != 10);

    cout << "\n\nLa suma de los cuadrados de los 10 primeros enteros mayores que cero es: " << suma << endl;
    
	getch();
    return 0;
}

