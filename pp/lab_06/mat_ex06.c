/*
Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a 
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos 
acima da diagonal principal. Imprima a matriz original e a matriz transformada. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int A[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      A[i][j] = rand() % 20 + 1;
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i < j)
      {
        A[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}