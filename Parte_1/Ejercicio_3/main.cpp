#include <iostream>
using namespace std;

int main() {
	cout<<"    ***EJERCICIO 3***"<<endl;
	cout<<"Ejercicio 3.1: Realice un programa que lea de la entrada est�ndar los siguientes datos de una persona: /nEdad: dato de tipo entero. Sexo: dato de tipo car�cter. Altura en metros: dato de tipo real. Tras leer los datos, el programa \ndebe mostrarlos en la salida est�ndar."<<endl<<endl;
	cout<<"3.2 Ejecute el programa del ejercicio anterior con entradas err�neas y observe los resultados. Por ejemplo, \nintroduzca un dato de tipo car�cter cuando se espera un dato de tipo entero."<<endl<<endl;
	
	int edad;
    char sexo;
    double altura;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;

    cout << "Ingrese la altura en metros: ";
    cin >> altura;
    
    cout << "\nDatos de la persona:" << endl;
    cout << "Edad: " << edad << " a�os" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

	return 0;
}
