#include <iostream>
using namespace std;
int main() {
int lado, perímetro ;//aquí le decimos al programa que vamos a introducir 
cout << "ingrese un lado del cuadrado" << endl;// aquí le pedimos al usuario ingresar el lado del cuadrado
cin>>lado;//aquí el programa guardara el lado 
perímetro=lado+lado+lado+lado ;//aquí el programa hará la cuenta
cout << "el perímetro del cuadrado es"<<perímetro<<endl;//aquí el programa le dirá el resultado del perim
return 0 ;
}