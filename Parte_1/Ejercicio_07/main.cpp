#include <iostream>
#include <iomanip> // importar para que despues de la coma alla solo 2 digitos
#include <cmath>
using namespace std;

/*
Ejercicio 7: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba 
en la salida estándar: A) perímetro y superficie y B) su hipotenusa.
*/

int main() {
	cout << "\t***EERCICIO 7***" << endl;
	cout << "Ejercicio 7: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar: A) perímetro y superficie y B) su hipotenusa." << endl;
	
    float cat1, cat2, hipot, perim, area;

    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cat1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cat2;

    hipot = sqrt(pow(cat1, 2) + pow(cat2, 2));

    perim = cat1 + cat2 + hipot;

    area = (cat1 * cat2) / 2;

	cout << fixed << setprecision(2); //para que despues de la coma alla solo 2 digitos
    cout << "\nA) Perimetro y Superficie del triangulo rectangulo:" << endl;
    cout << "Perimetro: " << perim << endl;
    cout << "Superficie: " << area << endl;

    cout << "\nB) Longitud de la hipotenusa: " << hipot << endl;

    return 0;
}

