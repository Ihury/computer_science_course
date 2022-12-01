/*
Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior 
valor. 
*/
#include <stdio.h>

int main(void)
{
  int A[4][4];
  int maior = 0;
  int linha = 0;
  int coluna = 0;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &A[i][j]);
      if (A[i][j] > maior)
      {
        maior = A[i][j];
        linha = i;
        coluna = j;
      }
    }
  }
  printf("Maior: %d\n", maior);
  printf("Linha: %d\n", linha);
  printf("Coluna: %d\n", coluna);
  return 0;
}