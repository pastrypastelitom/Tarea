#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número debe ser positivo.\n";
        return 1;
    }

    cout << "\nTabla de multiplicar hasta " << n << "x" << n << ":\n\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << " "; // solo un espacio
        }
        cout << endl;
    }

    return 0;
}

