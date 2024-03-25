#include <iostream>
#include <cmath> 
#include <iomanip>
#include <conio.h>
using namespace std;
/*
Ejercicio 14: Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x 
e y: f(x,y) = v??
??2-1
*/

int main() {
	cout << "\t***EJERCICIO 14***" << endl;
	
    float x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    float res = sqrt(x) / (y * y - 1);

    cout << fixed << setprecision(2);
    cout << "El valor de la funcion f(x, y) es: " << res << endl;

	getch();
    return 0;
}

