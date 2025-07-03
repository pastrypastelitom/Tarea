#include <iostream>
using namespace std;

int main() {
    double x, resultado = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    for (int i = 1; i <= 5; i++) {
        resultado *= x;
    }

    cout << x << " elevado a la quinta es igual a " << resultado << endl;

    return 0;
}

