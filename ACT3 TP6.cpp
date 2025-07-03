#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    cout << "Números pares entre 1 y 100:\n";

    for (int i = 2; i <= 100; i += 2) {
        cout << i;
        if (i < 100) cout << " + ";
        suma += i;
    }

    cout << "\n\nLa sumatoria de los números pares entre 1 y 100 es: " << suma << endl;

    return 0;
}

