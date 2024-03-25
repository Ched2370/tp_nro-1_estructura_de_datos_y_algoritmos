#include <iostream>
#include <conio.h>
using namespace std;

/*Ejercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del usuario, además 
debe mostrar el nombre_completo por pantalla. (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.
*/

int main() {
	cout << "\t***EJERCICIO 1***" << endl << endl;
	
	cout << " A)" << endl;
	
	string nombre;
	string ape;
	
	cout << " Ingresa tu nombre: "; cin >> nombre;
	cout << " Ingresa tu apellido: "; cin >> ape;
	
	cout << " Hola " + nombre + " " + ape + "\n\n";
	
	cout << " B)" << endl;
	cout << " " << nombre << " para realizar comentario en C y C++ puedes usar /* en bloques */ o // para una linea" << endl << endl;
	
	cout << " C)" << endl;
	cout << " Y para realizar saltos de linea puedes utilizar \\n dentro del string o <<endl fuera del string luego de un cout" << endl << endl;
	
	getch();
	return 0;
}
