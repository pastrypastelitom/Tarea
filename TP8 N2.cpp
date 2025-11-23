#include <iostream>
using namespace std;

int main() {
    int v[6] = {3, 5, 7, 2, 8, 9};
    int suma = 0;

    for (int i = 0; i < 6; i++) {
        suma = suma + v[i];
    }

    float promedio = (float)suma / 6;

    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}


