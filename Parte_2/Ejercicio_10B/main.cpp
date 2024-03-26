#include <iostream>
#include <conio.h>
using namespace std;

/*Ejercicio 10: Escriba un programa que calcule el valor de: 1! +2! + 3! + ... + n! (suma de factoriales)*/

int main() {
	cout << "\t***EJERCICIO 10B***" << endl;
	
    int n;
    unsigned long f = 0;

    cout << "Ingrese un numero entero positivo: "; cin >> n;

    if (n < 0) {
        cout << "\nEl factorial solo esta definido para numeros enteros no negativos." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
        	int f2 = f;
            f += i;
            cout << f2 << " + " << i << " = " << f<< endl;
        }
        cout << "El factorial de " << n << " es: " << f << endl;
    }

	getch();
    return 0;
}


