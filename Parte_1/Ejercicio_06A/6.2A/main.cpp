#include <iostream>
#include <conio.h>
using namespace std;

/*
6.2: Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como 
resultado lo transforma y muestra el total a cantidad de segundos
*/

int main() {
	cout << "\t***EJERCICIO 6.2***" << endl;

    int hh, min, seg, totalSegs;

    cout << "Ingrese las horas: ";
    cin >> hh;
    cout << "Ingrese los minutos: ";
    cin >> min;
    cout << "Ingrese los segundos: ";
    cin >> seg;

    totalSegs = hh * 3600 + min * 60 + seg;

    cout << "Total de segundos: " << totalSegs << endl;

	getch();
    return 0;
}

