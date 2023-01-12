/*
Crie  um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares
*/
#include <stdio.h>

void main()
{
  int array[5];

  for (int i = 0; i < 5; i++)
  {
    int *p = array + i;
    scanf("%d", p);
  }

  for (int i = 0; i < 5; i++)
  {
    int *p = array + i;
    if (*p % 2 == 0)
    {
      printf("%p\n", p);
    }
  }
}