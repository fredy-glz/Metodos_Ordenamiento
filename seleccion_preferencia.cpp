void intercambiar( int * const elemento1Ptr, int * const elemento2Ptr )
{
  int contenido = *elemento1Ptr;
  *elemento1Ptr = *elemento2Ptr;
  *elemento2Ptr = contenido;
}

void ordenamientoSeleccion( int * const arreglo, const int tamanio )
{
  int menor;

  for ( int i = 0; i < tamanio - 1; i++ )
  {
    menor = i;
    for ( int subindice = i + 1; subindice < tamanio; subindice++ )
      if ( arreglo[ subindice ] < arreglo[ menor ] )
        menor = subindice;

        intercambiar( &arreglo[ i ], &arreglo[ menor ] );
  }
}

