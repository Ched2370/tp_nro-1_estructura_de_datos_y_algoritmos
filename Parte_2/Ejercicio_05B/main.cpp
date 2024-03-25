#include <iostream>
#include <conio.h>
using namespace std;

/*
Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se 
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos. 
*/

int main() {
	cout << "\t***EJERCICIO 5B" << endl;
	
    int num;
    int suma = 0;

    do {
        cout << "Ingrese un valor entero (0 para salir): "; cin >> num;

        if (num > 0) {
            suma += num;
        }
        
    } while (num != 0 && !(num >= 20 && num <= 30));

    cout << "La suma de los valores mayores que 0 introducidos es: " << suma << endl;
    
	getch();
    return 0;
}

