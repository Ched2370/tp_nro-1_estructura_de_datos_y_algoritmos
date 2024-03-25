#include <iostream>
#include <iomanip> // Para std::setprecision
using namespace std;

/*
Ejercicio 13: Escribe la siguiente expresión en C++. Use precisión para redondear la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))
*/

int main() {
	cout << "\t***EJERCICIO 13***" << endl;
	
    //A
    float a = 5, b = 2;
    float resA = (a / b) + 1;

    //B
    float c = 3, d = 4, e = 2, f = 5;
    float resB = (c + d) / (e + f);

    //C
    float g = 5, h = 8, i = 3, j = 10, k = 7, l = 2;
    float resC = (g + (h / i)) / (j + (k / l));

    //D
    float m = 10, n = 6, o = 5, p = 3;
    float resD = m + (n / (o - p));

    //resultados
    cout << fixed << setprecision(2);
    cout << "Resultado A: " << resA << endl;
    cout << "Resultado B: " << resB << endl;
    cout << "Resultado C: " << resC << endl;
    cout << "Resultado D: " << resD << endl;

    return 0;
}

