#include <iostream>
#include <conio.h>
using namespace std;

/*
Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar 
su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.
*/

void mostrarTabla(int numero) {
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    cout << endl;
}

int main() {
	cout << "\t***EJERCICIO 1 B***" << endl;
    int opc;

    do {

        cout << "Seleccione una opcion:" << endl;
        cout << "1. Mostrar tabla de multiplicar" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: "; cin >> opc;

        switch (opc) {
            case 1: {
                int num;
                // Solicitar al usuario un número del 1 al 10
                cout << "Ingrese un numero del 1 al 10: ";
                cin >> num;

                if (num >= 1 && num <= 10) {
                    mostrarTabla(num);
                } else {
                    cout << "Numero invalido. Debe estar entre 1 y 10." << endl;
                }
                break;
            }
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion inválida. Por favor, seleccione nuevamente." << endl;
        }
    } while (opc != 0);
    
    cout << "Presione una tecla para cerrar el programa... " << endl;
	getch();
    return 0;
}

