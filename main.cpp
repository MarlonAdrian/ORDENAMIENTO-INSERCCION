#include <iostream>
#include <fstream>
using namespace std;

void Archivo();
void ingrese( double arreglo[], int t);
double suma_positivo(double Arreglo[], int t);
void imprimir(double Arreglo[], int t);
void ordenar_seleccion(double Arreglo[], int t);

using namespace std;


int main()
{
ofstream ordenamiento;
int tamanio;
double arreglo[100];
ordenamiento.open("ordenamiento", ios::out);
if(ordenamiento.is_open())
{
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> tamanio;ingrese(arreglo, tamanio);
  ordenamiento << "Arreglo original: ";
  for(int x = 0; x < tamanio; x++)
  {
    ordenamiento  << arreglo[x] << " ";
    }
  ordenamiento << '\n';
  cout << "La sumatoria de los numeros del arreglo es: "<< suma_positivo(arreglo, tamanio) << endl;

  ordenamiento << "La sumatoria de los numeros del arreglo es: "<< suma_positivo(arreglo, tamanio) << '\n';

cout << "Arreglo original: "; 
imprimir(arreglo, tamanio);
cout << "Arreglo ordenado: ";
ordenar_seleccion(arreglo, tamanio);

imprimir(arreglo, tamanio);
ordenamiento << "Arreglo ordenado: ";
for(int x = 0; x < tamanio; x++)
{
  ordenamiento << arreglo[x] << " ";
  }
  }
  else
  {
  cout << "El archivo no abrio exitosamente"<< endl;
}
ordenamiento.close();
return 0;
}




void ingrese(double arreglo[], int t)
{
int centi;
for(int i = 0; i < t; i++)
{cout << "Ingrese un número: ";
cin >> arreglo[i]; 
}
}


void imprimir(double Arreglo[], int t)
{
  for(int i = 0; i < t; i++)
  {
    cout << Arreglo[i] << "  "; 
  }
cout << endl;
}

double suma_positivo(double Arreglo[], int t)
{double suma = 0;
for(int i = 0; i < t; i++)
{
  if(Arreglo[i] > 0)
{
  suma += Arreglo[i]; 
  }
  }
return suma;
}


void ordenar_seleccion(double Arreglo[], int t)
{ 
  int i, j, aux, min;
for(i = 0; i < t; i++)
{
  min = i;
  for(j = i + 1; j < t; j++)
  {
    if(Arreglo[j] < Arreglo[min])
    {
      min = j;
    }
  }
  aux = Arreglo[i];
  Arreglo[i] = Arreglo[min];
  Arreglo[min] = aux;
 }
}