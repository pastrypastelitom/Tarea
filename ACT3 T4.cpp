#include <iostream>
using namespace std;

int main() {
    // Imprimir los primeros 25 múltiplos de 11
    for (int i = 1; i <= 25; i++) {
        cout << 11 * i;

        // Imprimir coma solo si no es el último número
        if (i < 25) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}