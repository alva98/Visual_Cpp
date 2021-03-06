// Prueba2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include "pch.h"
#include <iostream>
#define Suma(a,b) a+b

namespace Pueblo1  // Para Prueba con namespace
{
	int Calle;
}
namespace Pueblo2  // Para Prueba con namespace
{
	int Calle = 156;
}
using namespace std;
using namespace Pueblo1;	// Para Prueba con namespace

int Multiplica(int a=5, int b=9); //funcion parametros por defecto

int main()
{
	char c;
	cout << "-- Prueba de clasificar letra con swith --\n";
	cout << "Escriba una letra: ";
	cin >> c;
	switch (c)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			cout << "\nLa letra " << c << " es una vocal \n" << endl;
		break;
	default:
			cout << "\nLa letra " << c << " es una consonante \n" << endl;
		break;
	}
	cout << "\n-- Prueba de secuencia con while ---" << endl;
	int i=0;
	cout << "La secuencia es: ";
	while (i <= 5)
	{
		cout << i << " - ";
		i++;
	}
	cout << "\n\n-- Prueba de secuencia inversa con do...while ---" << endl;
	i = 10;
	cout << "La secuencia es: ";
	do
	{
		cout << i << " - ";
		i--;
	} while (i >= 5);
	cout << "\n\n-- Prueba de secuencia con for para arreglos ---" << endl;
	char b[4];
	b[0] = 'A';
	b[1] = 'l';
	b[2] = 'm';
	b[3] = 'o';
	cout << "La palabra es: ";
	for (i = 0; i < 4; i++)
	{
		cout << "  " << b[i];
	}
	cout << "\n\n-- Prueba de función #define Suma ---" << endl;
	int num1, num2;
	cout << "Entre número entero 1: ";
	cin >> num1;
	cout << "Entre número entero 2: ";
	cin >> num2;
	cout << "La suma " << num1 << " + " << num2 << " = z" << Suma(num1, num2) << endl;
	cout << "\n\n-- Prueba de función Multiplicar ---" << endl;
	cout << "La multiplicacion " << num1 << " * " << num2 << " = " << Multiplica(num1, num2) << endl;
	cout << "Multiplicacion con parametros por defecto (num1=5) * (num2=9) = " << Multiplica() << endl;
	cout << "\n\n-- Prueba de estructura struc ---" << endl;
	struct Info_Personal
	{
		string Nombres; 
		int Edad;
		Info_Personal() { Nombres = "Fernando"; Edad = 25; } //valores por defecto
		int Asigna_Edad(int e) { Edad = e; return 0; }
		int Recupera_Edad() { return Edad; }
	}Empleado1, Empleado2, Empleado3, Empleado4;
	Empleado1.Nombres = "Carlos"; // Asignacion de nombres a empleado 1
	Empleado1.Edad = 43; // Asignacion de edad a empleado 1
	Empleado2 = Empleado1;	//se copia del empleado1
	cout << "Edad del empleado1: " << Empleado1.Edad << endl;	
	cout << "Edad del empleado2: " << Empleado2.Edad << endl;
	// A Empleado3 no se le asigno valor, se toma el dado por defecto
	cout << "Edad del empleado3: " << Empleado3.Edad << endl;
	Empleado4.Asigna_Edad(40);
	cout << "Edad del empleado4: " << Empleado4.Recupera_Edad() << endl;
	cout << "\n\n-- Prueba con namespace ---" << endl;
	Calle = 101; // Por usar "using namespace Pueblo1"
	cout << "Calle de Pueblo1: " << Calle << endl;
	// Por no usar "using namespace Pueblo2" se usa Pueblo2::Calle
	cout << "Calle de Pueblo2: " << Pueblo2::Calle << endl;
	cout << "\n\n-- Prueba con punteros ---" << endl;
	int numero = 234;
	cout << "El numero es " << numero << endl;
	cout << "Su direccion es " << &numero << endl;
	int *p = &numero;
	cout << "El puntero p apunta a la misma direccion de numero: " << p << endl;
	cout << "El valor de ese mismo puntero *p es: " << *p << endl;
	cout << "\n\n-- Prueba con punteros a Arreglos ---" << endl;
	int Presion[5];
	int *pa;
	pa = Presion;		//pa apunta a primer elemento del array Presion
	Presion[0] = 15;
	cout << "Direccion del array Presion: "<<&Presion<<endl;
	cout << "Otra forma de direccion (array) de Presion: " << Presion << endl;
	cout << "Puntero pa al array Presion: " << pa << endl;
	cout << "Valor del puntero *pa al array Presion: " << *pa << endl;
	pa++;
	cout << "Puntero pa++ al array Presion: " << pa << endl;
	cout << "Valor del puntero *pa++ al array Presion: " << *pa << endl;
	cout << "\n\n-- Prueba con punteros a Estructuras ---" << endl;
	Info_Personal *pip;
	pip = &Empleado1;
	cout << "Direccion Puntero pip a variable Empleado1 de struct Info_Personal: " << pip << endl;
	cout << "Valor Puntero pip->Edad de variable Empleado1 de struct Info_Personal: " << pip->Edad << endl;
	cout << "Direccion &Empleado1.Edad de struct Info_Personal: " << &Empleado1.Edad << endl;
	system("pause");
	return 0;
}

int Multiplica(int a, int b)
{
	return a * b;
}