#include <iostream>
#include <string>
using namespace std;

int contarLetras(const string& cadena) {
    int contador = 0;
    for (char c : cadena) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Cantidad de letras: " << contarLetras(cadena) << endl;
    return 0;
}
