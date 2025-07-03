#include <iostream>
using namespace std;

int main() {
    int cantidad_vendedores;

    cout << "Ingrese la cantidad de vendedores: ";
    cin >> cantidad_vendedores;

    const int MAX_NOMBRE = 50;
    char nombres[100][MAX_NOMBRE];  // para hasta 100 vendedores, cada nombre máx. 50 caracteres
    int ventas[100];

    int total_ventas = 0;

    for (int i = 0; i < cantidad_vendedores; i++) {
        cout << "\nVendedor " << (i + 1) << endl;
        cout << "Nombre: ";
        cin >> nombres[i];  // lee hasta el primer espacio
        cout << "Cantidad de ventas: ";
        cin >> ventas[i];
        total_ventas += ventas[i];
    }

    cout << "\n===== Resumen de ventas =====\n";
    for (int i = 0; i < cantidad_vendedores; i++) {
        cout << nombres[i] << ": " << ventas[i] << " ventas" << endl;
    }

    cout << "\nTotal de ventas de todos los vendedores: " << total_ventas << endl;

    return 0;
}

