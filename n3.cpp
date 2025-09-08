#include <iostream>
#include <string>
#include <algorithm> // reverse
using namespace std;

string reverso(const string& cadena) {
    string r = cadena;
    reverse(r.begin(), r.end());
    return r;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Reverso: " << reverso(cadena) << endl;
    return 0;
}
