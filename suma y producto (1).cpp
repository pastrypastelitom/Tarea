#include <iostream>
using namespace std;
int main() {
int n1 ;
int n2 ;
cout << "ingrese un numero. este será sumado con el próximo que ingrese" << endl;
cin >>n1 ;
cout<< "ingrese otro numero" ;
cin >>n2;
int resultado ;
resultado = n1 + n2 ;
cout<< "el resultado es:" <<resultado<<endl ;
int n3 ;
cout << "ingrese un número, este será muktiplicado por el próximo que ingrese" << endl;
cin >>n3;
int n4 ;
cout << "ingrese otro numero" << endl;
cin >>n4;
int producto ;
producto = n3*n4 ;
cout<< "el producto es:" <<producto<<endl ; 
return 0 ; 
}