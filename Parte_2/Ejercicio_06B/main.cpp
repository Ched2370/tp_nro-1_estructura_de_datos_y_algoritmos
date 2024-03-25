#include <iostream>
#include <cstdlib>
#include <ctime>  
#include <cmath>  
#include <conio.h>
using namespace std;

/*
Ejercicio 6: Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, sin utilizar la 
función pow. Donde num será una base generada de forma aleatoria entre 2 y 42, y exp será ingresada por teclado no 
mayor a 5. Usar las librerías stdlib.h y cmath.
*/

int main() {
	cout << "\t***EJERCICIO 6B***" << endl;
	
    srand(time(0));

    int num = rand() % 41 + 2;

    int exp;
    cout << "Ingrese un exponente (no mayor a 5): ";
    cin >> exp;

    if (exp <= 5) {
        int res = 1;
        for (int i = 0; i < exp; ++i) {
            res *= num;
        }
        cout << num << "^" << exp << " = " << res << endl;
    } else {
        cout << "Exponente ingresado no válido. Debe ser no mayor a 5." << endl;
    }

	getch();
    return 0;
}

