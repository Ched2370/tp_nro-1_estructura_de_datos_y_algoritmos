#include <iostream>
#include <conio.h>
using namespace std;

/*Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida 
estándar, el precio del producto al aplicarle el IVA. */

int main() {
	cout << "\t***EJERCICIO 2***" << endl;

	float precioP;
	const double IVA = 0.21;
	
	cout << "\nIngnresa el precio del producto: "; cin >> precioP;
	cout << "El precion del producto mas el iva es de: " << precioP * (1 + IVA) << "$" << endl;
	
	getch();
	return 0;
}
