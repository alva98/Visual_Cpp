// Prueba1.cpp : Ejercicios elementales de programación. 
// Calculo de la hipotenusa a partir de los catetos.

#include "C:\Users\Docente\OneDrive\Repositorios\Visual_Cpp\INCLUDE\iostream.h"
#include <C:\Users\Docente\OneDrive\Repositorios\Visual_Cpp\INCLUDE\MATH.H>
#include "pch.h"

void Calcula_Volumen(float largo, float ancho, float alto)
{
	float volumen = largo * ancho * alto;
	cout << "\nCálculo del volumen" << endl;
	cout << "V = " << volumen << endl;
	return;
}

void Calcula_Hipotenusa(float catetoA, float catetoB)
{
	float hipotenusa, perimetro = 0, area = 0;

	cout << "\nCalculos de la hipotenusa, perimetro y area del triangulo rectangulo." << endl;
	hipotenusa = (float)sqrt(pow(catetoA, 2) + pow(catetoB, 2));
	perimetro = catetoA + catetoB + hipotenusa;
	area = (catetoA*catetoB) / 2;
	cout << "\n\nHipotenusa = " << hipotenusa;
	cout << "\nPerimetro = " << perimetro;
	cout << "\nArea = " << area << endl;
	return;
}

int main()
{
	float ancho, largo, alto;

	cout << "Entrada de las medidas de los lados (catetos) de un rectangulo" << endl;
	cout << "Largo (Cateto A): ";
	cin >> catetoA;
	cout << "   Ancho (Cateto B): ";
	cin >> catetoB;
	Calcula_Hipotenusa(largo, ancho);
	Calcula_Volumen(largo, ancho, alto);
	return 0;
}

