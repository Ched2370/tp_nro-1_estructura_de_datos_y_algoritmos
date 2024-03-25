#include <iostream>
#include <conio.h>
using namespace std;
/* 
Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas, 
minutos y segundos.
6.2: Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como 
resultado lo transforma y muestra el total a cantidad de segundos
 */

int main() {
	cout << "\t***EJERCICIO 6.1***" << endl;
	
	int seg, hh, min, rest;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> seg;

    hh = seg / 3600;
    rest = seg % 3600;

    min = rest / 60;

    rest %= 60;

    cout << "Horas: " << hh << endl;
    cout << "Minutos: " << min << endl;
    cout << "Segundos: " << rest << endl;
    
	getch();
	return 0;
}
