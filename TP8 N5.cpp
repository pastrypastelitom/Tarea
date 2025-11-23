#include <iostream>
using namespace std;

int main() {
    float alturas[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese altura de la persona " << i + 1 << ": ";
        cin >> alturas[i];
    }
    
    float suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += alturas[i];
    }
    float promedio = suma / 5;
    
    int masAltas = 0;
    int masBajas = 0;
    for (int i = 0; i < 5; i++) {
        if (alturas[i] > promedio) {
            masAltas++;
        }
        if (alturas[i] < promedio) {
            masBajas++;
        }
    }
    
    cout << "\nEl promedio de alturas es: " << promedio << endl;
    cout << "Personas mas altas que el promedio: " << masAltas << endl;
    cout << "Personas mas bajas que el promedio: " << masBajas << endl;
    
    return 0;
}