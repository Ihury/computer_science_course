/*
Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe 
o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o ponteiro 
(use *)
*/
#include <stdio.h>

void main()
{
  int array[5];
  int *p = array;

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", p + i);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", *(p + i));
  }
}