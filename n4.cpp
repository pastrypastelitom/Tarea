#include <iostream>
#include <string>
using namespace std;

int contarCaracter(const string& cadena, char caracter) {
    int contador = 0;
    for (char c : cadena) {
        if (c == caracter) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    string entrada;
    cout << "Ingrese un unico caracter a buscar: ";
    getline(cin, entrada);
    char caracter = entrada.empty() ? '\0' : entrada[0];

    cout << "El caracter '" << caracter << "' aparece "
         << contarCaracter(cadena, caracter) << " veces." << endl;
    return 0;
}
