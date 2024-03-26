#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n */

int main() {
	cout << "\t***EJERCICIO 11B***" << endl;
	
    int n;
    unsigned long suma = 0, cont = 0;

    cout << "Ingrese un numero entero positivo: "; cin >> n;

    for (int i = 1; i <= n; ++i) {
        suma += pow(2, i);
        cont = pow(2, i);
        cout << "\n2^" << i << " = " << cont << endl;
    }

    cout << "\nLa suma de las potencias de 2 desde 2^1 hasta 2^" << n << " es: " << suma << endl;

	getch();
    return 0;
}

