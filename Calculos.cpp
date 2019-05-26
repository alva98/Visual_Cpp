#include <iostream.h>
#include <math.h>

void Calcula_Volumen(float largo, float ancho, float alto)
  {
  Calcula_Volumen = largo * ancho * alto;
  cout << "\nCálculo del volumen" << endl;
  cout << "V = " << Calcula_Volumen << endl;
  return;
  }

int main()
{
float catetoA, catetoB, hipotenusa;
float perimetro=0, area=0;

cout << "Cateto A: ";
cin >> catetoA;

cout << "Cateto B: ";
cin >> catetoB;

hipotenusa = (float) sqrt(pow(catetoA, 2)+ pow(catetoB, 2));
cout ;
cout << "\n\nHipotenusa = " << hipotenusa;
cout << "\n\n\n\n";

return 0;
}
