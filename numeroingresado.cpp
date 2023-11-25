//programa: numeroingresado.cpp
//autor: franco jefferson
//fecha: 24-11-2023
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    if (n > 0) {
        cout << "El número ingresado es positivo." << endl;
    } else if (n < 0) {
        cout << "El número ingresado es negativo." << endl;
    } else if(n==0) {
        cout << "El número ingresado es cero." << endl;
    }
    return 0;
}
