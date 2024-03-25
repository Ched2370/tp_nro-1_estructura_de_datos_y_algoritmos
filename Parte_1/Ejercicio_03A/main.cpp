#include <iostream>
#include <conio.h>
using namespace std;

/*
Ejercicio 3.1: Realice un programa que lea de la entrada estándar los siguientes datos de una persona: Edad: dato 
de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras leer los datos, el programa 
debe mostrarlos en la salida estándar.
3.2 Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados. Por ejemplo, 
introduzca un dato de tipo carácter cuando se espera un dato de tipo entero.
*/

int main() {
	cout << "\t***EJERCICIO 3***" << endl;

	int edad;
    char sexo;
    double altura;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;

    cout << "Ingrese la altura en metros: ";
    cin >> altura;
    
    cout << "\nDatos de la persona:" << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;
	
	getch();
	return 0;
}
