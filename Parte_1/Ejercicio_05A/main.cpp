#include <iostream>
#include <conio.h>
using namespace std;
/* Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables. */

int main() {
	cout << "\t***EJERCICIO 5***" << endl;
	
	int a, b, c, aux;
	
	cout << "Ingrese el valor de la variable a: "; cin >> a;
	cout << "Ingrese el valor de la variable b: "; cin >> b;
	cout << "Ingrese el valor de la variable c: "; cin >> c;
	
	aux = a;
	a  = b;
	b = c;
	c = aux;
	
	cout << endl << endl;
	cout << "El valor de a, ahora es: " << a << endl;
	cout << "El valor de b, ahora es: " << b << endl;
	cout << "El valor de c, ahora es: " << c << endl;
	
	getch();
	return 0;
}
