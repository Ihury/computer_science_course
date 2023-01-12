/*
Crie  um  programa  que  contenha  um  array  de  float  contendo  10  elementos.  Imprima  o 
endereço de cada posição desse array. 
*/
#include <stdio.h>

void main()
{
  float array[10];
  int i;

  for (i = 0; i < 10; i++)
    printf("%p\n", &array[i]);
}