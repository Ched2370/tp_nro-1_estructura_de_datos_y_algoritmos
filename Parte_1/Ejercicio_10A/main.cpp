#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
/*
Ejercicio 10: Escriba un programa que lea de la entrada est�ndar el nombre de una persona en un arreglo de 
caracteres. Adem�s, pide el a�o de nacimiento, y determina su edad en a�os complidos.
*/

int main() {
	cout << "\t***EJERCICIO 10***" << endl;
	
    char nombre[50];
    int anyoNac, anyoA, edad;

    cout << "Ingrese su nombre: "; cin.getline(nombre, 50);

    cout << "Ingrese su a�o de nacimiento: "; cin >> anyoNac;

    anyoA = 2024;

    edad = anyoA - anyoNac;

    cout << "Hola, " << nombre << " Tienes aproximadamente" << edad << " a�os." << endl;

	getch();
    return 0;
}

