#include <iostream>
#include <string>
using namespace std;

string concatenar(const string& c1, const string& c2) {
    return c1 + " " + c2; // se agrega un espacio entre ambas
}

int main() {
    string c1, c2;
    cout << "Ingrese la primera cadena: ";
    getline(cin, c1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, c2);

    cout << "Concatenacion: " << concatenar(c1, c2) << endl;
    return 0;
}

