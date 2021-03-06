// Programacion orientada a objetos
// Prueba3.cpp: Uso de clases.

#include "pch.h"
#include <iostream>

using namespace std;

class Persona
{
public:
	Persona();
	~Persona();
	string Nombres;
	string Apellidos;
	char Sexo;
	short Guardar_Fecha_Nac(short, short, short);
	short Mostrar_Fecha_Nac(short, short, short);
	short Edad();
private:
	struct Fecha
	{
		short dia, mes, año;
	} Fecha_Nac;
protected:
};

Persona::Persona()
{
}

Persona::~Persona()
{
}

short Persona::Guardar_Fecha_Nac(short d=2, short m=3, short a=2018)
{
	Fecha_Nac.año = a;
	return 0;
}

short Persona::Mostrar_Fecha_Nac(short d = 2, short m = 3, short a=2018)
{
	if (Fecha_Nac.año != NULL)
	{
		a = Fecha_Nac.año;
		return a;
	}
	else
		return 0;
}

short Persona::Edad()
{
	if (Fecha_Nac.año != NULL)
	{
		return 2018 - Fecha_Nac.año;
	}
	else
		return 0;
}

int main()
{
	int Edad;
	short dia=1, mes=1, año;
	Persona Empleado;
	cout << "Programación orientada a objetos en C++" << endl;
	cout << "Prueba con clases" << endl;
	cout << "Año de nacimiento del empleado: ";
	cin >> año;
	Empleado.Guardar_Fecha_Nac(dia, mes, año);
	Edad = Empleado.Edad(); 
	cout << "La edad es: " << Edad <<" años"<<endl;
	system("pause");
	return 0;
}

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
