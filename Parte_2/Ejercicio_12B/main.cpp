#include <iostream>
#include <conio.h>
using namespace std;

/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
*/

int main() {
	cout << "\t***EJERCICIO 12B***" << endl;
	
    int n;
    int res = 1; 
    bool sumar = false, salir = false;
    char cont;

	do{		
	    cout << "Ingrese un numero entero positivo: "; cin >> n;
		
	    cout << "1";
	    for (int i = 2; i <= n; ++i) {
	        if (sumar) {
	            cout << " + " << i;
	            res += i;
	        } else {
	            cout << " - " << i;
	            res -= i;
	        }
	        sumar = !sumar;
	    }
	
	    cout << " = " << res << endl;
		cout << "\nDesea salir? (s/n): "; cin >> cont;
		if(cont == 's' || cont == 'S'){
			salir = true;
		}else {
			res = 1;
		}
	}while(salir == false);
	
    getch();
    return 0;
}


