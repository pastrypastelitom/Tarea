#include <iostream>
using namespace std;
int main() 
{ 
//este programa calculara lo que debe abonar según la cantidad elegida
int n1 ;
int n2 ;
cout << "ingrese el valor del articulo" << endl;
cin >>n1 ;
cout << "ingrese la cantidad deseada" << endl;
cin >> n2 ;
int abonar ;
abonar = n1*n2 ;
cout << "usted debe abonar"<<endl<<abonar ; //hace la multiplicación entre el precio y la cantidad elegida.
 }