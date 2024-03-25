#include <iostream>
#include <conio.h>
using namespace std;

/* 
Ejercicio 7: 
A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n. 
B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1
*/

int main() {
	cout << "\t***EJERCICIO 7B***" << endl;
	
    int n;
    int suma_w = 0;
    int suma_f = 0;

    cout << "Ingrese un número entero positivo: "; cin >> n;

    int i = 1;
    while (i <= n) {
        suma_w += i;
        i++;
    }

    for (int j = 1; j <= 2 * n - 1; j += 2) {
        suma_f += j;
    }

    cout << "La suma de los numeros de 1 a " << n << " es: " << suma_w << endl;
    cout << "La suma de los numeros impares de 1 a " << 2 * n - 1 << " es: " << suma_f << endl;

	getch();
    return 0;
}

