//Insercion
#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>
using namespace std;


int Insertion(int datos[], int tamanioArreglo){
    unsigned t0,t1;
    
    srand(time(NULL));
    //tamanioArreglo = 100000;
    int insertar;
    
    
//    for(int i = 0; i<tamanioArreglo; i++)
//    datos[i] = 1 + rand() % 5000;
    
    /*
     cout<< "Arreglo desordenado: \n";
     
     for(int i = 0; i<tamanioArreglo;i++)
     cout << setw(4) << datos[i];
     */
    t0 = clock();
    for ( int siguiente = 1; siguiente < tamanioArreglo; siguiente++ )
    {
        insertar = datos[siguiente];
        
        int moverElemento = siguiente;
        
        while ((moverElemento >0 ) && (datos[moverElemento - 1] > insertar))
        {
            datos[moverElemento] = datos[moverElemento - 1];
            moverElemento--;
        }
        datos[ moverElemento ] = insertar;
    }
    t1 = clock();
    /*
     cout<<"\nArreglo Ordenado: "<<endl;
     for ( int i = 0; i < tamanioArreglo; i++ )
     cout << setw( 4 ) << datos[ i ];
     */
    cout << endl;
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout<<"Execution time: "<<time<<endl;
    return time;
}
