#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
Ejercicio 12: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 
+ bx + c = 0, teniendo en cuenta que: f(a,b,c) =-??+v(??2-4????

ejemplo: 
a = 1
b = -4
c = 4
*/

int main() {
	cout << "\t***EJERCICIO 12***" << endl;
    float a, b, c, disc, x1, x2;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    disc = b * b - 4 * a * c;

    cout << fixed << setprecision(2);
    if (disc >= 0) {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);

        // Mostrar las soluciones
        cout << "Las soluciones de la ecuacion son: " << endl;
        cout << "\nx1 = " << x1 << endl;
        cout << "\nx2 = " << x2 << endl;
    } else {
        cout << "La ecuación no tiene soluciones reales." << endl;
    }

    return 0;
}

