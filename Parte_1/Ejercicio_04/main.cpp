#include <iostream>
using namespace std;
/* Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida 
ser� el monto convertido a d�lares. Tome la cotizaci�n actual de d�lar blue, redondear a 2 cifras */

int main() {
	cout<<"\t***EJERCICIO 4***"<<endl;
	cout<<"Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida\n ser� el monto convertido a d�lares. Tome la cotizaci�n actual de d�lar blue, redondear a 2 cifras"<<endl<<endl;
	float saldoP; // cotizacion blue 1020$
	cout<<"Indique la cantidad de dinero a ingresar: "; cin>>saldoP;
	cout.precision(3);
	cout<<"\n\nSu cotizacion en dolar blue al dia es de: "<<saldoP/1020<<"$"<<endl<<endl;
	
	return 0;
}
