#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
/*
Ejercicio 10: Escriba un programa que lea de la entrada estándar el nombre de una persona en un arreglo de 
caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.
*/

int main() {
	cout << "\t***EJERCICIO 10***" << endl;
	
    char nombre[50];
    int anyoNac, anyoA, edad;

    cout << "Ingrese su nombre: "; cin.getline(nombre, 50);

    cout << "Ingrese su año de nacimiento: "; cin >> anyoNac;

    anyoA = 2024;

    edad = anyoA - anyoNac;

    cout << "Hola, " << nombre << " Tienes aproximadamente" << edad << " años." << endl;

	getch();
    return 0;
}

