#include <iostream>
using namespace std;

int main() {
    int n, valor;
    int pares = 0, impares = 0;

    cout << "Ingrese la cantidad de numeros a cargar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero #" << i + 1 << ": ";
        cin >> valor;

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "\nCantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}