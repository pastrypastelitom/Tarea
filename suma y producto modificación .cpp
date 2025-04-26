#include <iostream>
using namespace std;
int main() 
{ 
//este programa calculara la suma de 4 números elegidos y dará el promedio
int n1 ;
cout << "ingrese un numero" << endl;
cin >>n1 ;
int n2 ;
cout << "ingrese el segundo numero" << endl;
cin >>n2 ;
int n3 ;
cout << "ingrese el tercer numero" << endl;
cin >>n3 ;
int n4 ;
cout << "ingrese el cuarto numero, ahora este se sumara con los demas." << endl;
cin >> n4;
int resultado ;
resultado = n1 + n2 + n3 + n4;
cout << "el resultado es" <<endl<< resultado<< endl ; //está línea mostrará en pantalla el resultado de las sumas
int promedio ;
promedio = resultado/4 ;
cout << "el promedio  es" <<endl<< promedio ;  //está línea mostrará el promedio de la suma.
return 0 ; 
 }