#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    cout << "Ingrese un n�mero entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "El n�mero debe ser no negativo.\n";
        return 1; // salir con error
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}


