#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

/* Ejercicio 11: Escribe un programa que lea de la entrada est�ndar dos n�meros y muestre en la salida est�ndar su 
suma, resta, multiplicaci�n y divisi�n. */

int main() {
	cout << "\t***EJERCICIO 11***" << endl;
	
	float a, b;
	cout << "ingrese el valor de a: "; cin >> a;
	cout << "\ningrese el valor de b: "; cin >> b;
	
	cout << fixed << setprecision(2);
	cout << "\nSu suma: " << a + b;
	cout << "\nSu resta: " << a - b;
	cout << "\nSu multiplicacion: " << a * b;
	cout << "\nSu division: " << a / b;
	
	getch();
	return 0;
}
