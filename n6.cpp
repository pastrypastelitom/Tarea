#include <iostream>
#include <string>
#include <algorithm> // reverse
#include <limits>    // numeric_limits
using namespace std;

// i
int obtenerLongitud(const string& cadena) {
    return static_cast<int>(cadena.size());
}
// ii (con espacio)
string concatenar(const string& c1, const string& c2) {
    return c1 + " " + c2;
}
// iii
string reverso(const string& cadena) {
    string r = cadena;
    reverse(r.begin(), r.end());
    return r;
}
// iv
int contarCaracter(const string& cadena, char caracter) {
    int contador = 0;
    for (char c : cadena) if (c == caracter) contador++;
    return contador;
}
// v (sin isalpha)
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
    int opcion = 0;
    char repetir = 's';

    while (repetir == 's' || repetir == 'S') {
        cout << "\n--- MENU DE OPERACIONES CON CADENAS ---\n";
        cout << "1) Longitud de una cadena\n";
        cout << "2) Concatenar dos cadenas\n";
        cout << "3) Reverso de una cadena\n";
        cout << "4) Contar apariciones de un caracter\n";
        cout << "5) Contar letras en una cadena\n";
        cout << "6) Salir\n";
        cout << "Opcion: ";

        if (!(cin >> opcion)) {
            cerr << "Entrada invalida. Saliendo.\n";
            return 1;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (opcion == 1) {
            string s;
            cout << "Ingrese una cadena: ";
            getline(cin, s);
            cout << "Longitud: " << obtenerLongitud(s) << endl;

        } else if (opcion == 2) {
            string a, b;
            cout << "Ingrese la primera cadena: ";
            getline(cin, a);
            cout << "Ingrese la segunda cadena: ";
            getline(cin, b);
            cout << "Concatenacion: " << concatenar(a, b) << endl;

        } else if (opcion == 3) {
            string s;
            cout << "Ingrese una cadena: ";
            getline(cin, s);
            cout << "Reverso: " << reverso(s) << endl;

        } else if (opcion == 4) {
            string s;
            cout << "Ingrese una cadena: ";
            getline(cin, s);
            string entrada;
            cout << "Ingrese un unico caracter a buscar: ";
            getline(cin, entrada);
            char ch = entrada.empty() ? '\0' : entrada[0];
            cout << "El caracter '" << ch << "' aparece "
                 << contarCaracter(s, ch) << " veces." << endl;

        } else if (opcion == 5) {
            string s;
            cout << "Ingrese una cadena: ";
            getline(cin, s);
            cout << "Cantidad de letras: " << contarLetras(s) << endl;

        } else if (opcion == 6) {
            cout << "Saliendo...\n";
            break;
        } else {
            cout << "Opcion invalida.\n";
        }

        // Preguntar si se quiere volver al menú
        cout << "\n¿Desea usar otra opcion? (s/n): ";
        cin >> repetir;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Programa finalizado.\n";
    return 0;
}
