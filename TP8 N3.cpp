#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;

    int v[100]; 
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }

   
    for (int i = 0; i < n; i++) {
        v[i] = v[i] * 2;
    }


    int nuevo, pos;
    cout << "Valor a insertar: ";
    cin >> nuevo;
    cout << "Posicion (0 a " << n << "): ";
    cin >> pos;

    for (int i = n; i > pos; i--) {
        v[i] = v[i - 1];
    }
    v[pos] = nuevo;
    n++;


    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            for (int j = i; j < n - 1; j++) {
                v[j] = v[j + 1];
            }
            n--;
            i--;  
        }
    }

   
    cout << "Vector final: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}

