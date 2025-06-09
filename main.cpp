#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int maximo, minimo;
    float suma = 0, promedio;

    cout << "Ingresa 10 números:\n";

    // Leer los 10 números y acumular la suma
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Inicializar máximo y mínimo con el primer número
    maximo = numeros[0];
    minimo = numeros[0];

    // Buscar máximo y mínimo
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    // Calcular el promedio
    promedio = suma / 10;

    // Mostrar resultados
    cout << "El número máximo es: " << maximo << endl;
    cout << "El número mínimo es: " << minimo << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}