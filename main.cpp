/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>



float base;

float altura;

float resultado;



using namespace std;



int main(){

cout << "Ingrese la base del triangulo: ";

cin >> base; // el programa guardara el numero ingresado

cout << "Ingrese la altura del triangulo: ";//la altura es un modulo que usara el programa para calcular el area pñara calc

cin >> altura; //el programa guardara la altura

resultado=(base*altura)/2;// esta es la formula del area 

cout << "El area de su triangulo es: " << resultado << endl; // el programa mostrara el resultado=area



cin.ignore(); //esto hace que el programa ignore ciertas entradas

cin.get(); 

}