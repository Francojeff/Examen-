//programa: multiplicar.cpp
//autor: franco jefferson
//fecha: 24-11-2023
#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "Tabla de multiplicar del " << numero << " del 1 al 10:" << endl;
    int n = 1;
    do {
        cout << numero << " x " << n<< " = " << (numero * n) << endl;
        ++n;
    } while (n <= 10);

    return 0;
}
