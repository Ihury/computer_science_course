/*
Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.
*/
#include <stdio.h>

void printArray(int *array, int size);

void main()
{
  int array[5];

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", array + i);
  }

  printArray(array, 5);
}

void printArray(int *array, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", (*(array + i)));
  }
}