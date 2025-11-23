#include <iostream>
using namespace std;

int main() {
    int v[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> v[i];
    }

    int maximo = v[0];
    int minimo = v[0];

    for (int i = 1; i < 10; i++) {
        if (v[i] > maximo) {
            maximo = v[i];
        }
        if (v[i] < minimo) {
            minimo = v[i];
        }
    }

    cout << "El maximo es: " << maximo << endl;
    cout << "El minimo es: " << minimo << endl;

    return 0;
}
