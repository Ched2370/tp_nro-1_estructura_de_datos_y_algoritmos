#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	cout << "\t***EJERCICIO 9B***" << endl;
	
    int n;
    unsigned long f = 1; //unsigned indica que el numero no tiene signos, asi solo puede representar de 0 para arriba

    cout << "Ingrese un número entero positivo: "; cin >> n;

    if (n < 0) {
        cout << "El factorial solo esta definido para numeros enteros no negativos." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            f *= i;
            cout << f << endl;
        }
        cout << "El factorial de " << n << " es: " << f << endl;
    }
	
	getch();
    return 0;
}

