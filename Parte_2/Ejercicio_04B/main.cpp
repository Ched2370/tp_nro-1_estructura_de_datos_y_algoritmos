#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

/*
Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 
horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja
*/

int main() {
    const int NUM_T = 6;
    int temps[NUM_T];
    int suma = 0;
    int temp_max = -100; 
    int temp_min = 100; 

    for (int i = 0; i < NUM_T; ++i) {
        cout << "Ingrese la temperatura exterior cada 4 horas: "; cin >> temps[i];
        suma += temps[i];

        if (temps[i] > temp_max) {
            temp_max = temps[i];
        }

        if (temps[i] < temp_min) {
            temp_min = temps[i];
        }
    }

    float temp_med = static_cast<float>(suma) / NUM_T;
    
	cout << fixed << setprecision(2) << endl;
    cout << "Temperatura media del dia: " << temp_med << "°C" << endl;
    cout << "Temperatura mas alta del dia: " << temp_max << "°C" << endl;
    cout << "Temperatura mas baja del dia: " << temp_min << "°C" << endl;

	getch();
    return 0;
}

