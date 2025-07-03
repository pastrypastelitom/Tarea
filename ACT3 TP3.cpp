#include <iostream>
using namespace std;

int main() {
    double numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "El número debe ser positivo.\n";
        return 1;
    }

    int pasos = 0;

    while (numero >= 0.01) {
        cout << "Paso " << pasos << ": " << numero << endl;
        numero /= 2;
        pasos++;
    }

    cout << "Paso " << pasos << ": " << numero << " (menor que 0.01)" << endl;

    return 0;
}

