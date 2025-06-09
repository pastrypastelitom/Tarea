#include <iostream>
using namespace std;

int main() {
	float numero;

	cout << "Ingresa un nC:mero: ";
	cin >> numero;

	// ValidaciC3n opcional: evitar dividir por 0 o nC:meros negativos
	if (numero <= 0) {
		cout << "El nC:mero debe ser mayor que 0." << endl;
		return 1;
	}

	// DivisiC3n repetida usando un for
	for (; numero >= 0.01; numero /= 2) {
		cout << "NC:mero actual: " << numero << endl;
	}

	cout << "Resultado final: " << numero << " (menor que 0.01)" << endl;

	return 0;
}