// Programacion con punteros
// Prueba4.cpp: Uso de punteros.

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char c='d';
	char* pc = &c;
	int i = 5;
	int* pi;
	pi = &i;
	
	cout << "Prueba con punteros \n" << endl;
	cout << "El valor de c es " << c << endl;
	cout << "El valor del puntero pc es " << *pc << endl;
	cout << "La direccion de memoria de pc es " << pc << endl;
	cout << "El valor del puntero pi es " << *pi << endl;
	cout << "La direccion del puntero pi es " << pi << endl;
	cout << endl;
	system("Pause");
	return 0;
}