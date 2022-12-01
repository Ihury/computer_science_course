/*
Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui. 
*/
#include <stdio.h>

int main(void)
{
  int A[4][4];
  int count = 0;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &A[i][j]);
      if (A[i][j] > 10)
      {
        count++;
      }
    }
  }
  printf("Valores maiores que 10: %d\n", count);
  return 0;
}