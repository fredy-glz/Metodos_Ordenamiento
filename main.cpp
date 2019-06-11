#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>
#include "seleccion_preferencia.cpp"
using namespace std;

int main()
{
  unsigned t0,t1;

  srand(time(NULL));

  const int tamanioArreglo = 100000;
  int a[ tamanioArreglo ];

  for(int i = 0; i<tamanioArreglo; i++)
  a[i] = 1 + rand() % 50;

  t0 = clock();
  ordenamientoSeleccion( a, tamanioArreglo );
  t1 = clock();

    double time = (double(t1-t0)/CLOCKS_PER_SEC);
  cout<<"Execution time: "<<time<<endl;
  return 0;
}