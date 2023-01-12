/*
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima 
o endereço de cada posição dessa matriz.
*/
#include <stdio.h>

void main()
{
  float matrix[3][3];
  int i, j;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      printf("%p\n", &matrix[i][j]);
}