#include <iostream>
#include <conio.h>
using namespace std;

/*jercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 1..hasta n. Ej.: si 
n=13, nos muestra la salida: Fibonacci(13)= 1 1 2 3 5 8 13*/

int main() {
	cout << "\t***EJERCICIO 13B***" << endl;
	
    int n;

    cout << "Ingrese un numero entero positivo: "; cin >> n;

    cout << "Fibonacci(" << n << ") = ";

    int a = 1;
    int b = 1;
    for (int i = 0; i < n; ++i) {
    	if(i == (n - 1)){
    		cout << a << " ";
		}else {
			cout << a << ", ";
		}
        
        int aux = a + b;
        a = b;
        b = aux;
    }
    cout << endl;

	getch();
    return 0;
}



