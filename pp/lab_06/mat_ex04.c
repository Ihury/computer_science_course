/*
Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse 
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não 
encontrado”
*/
#include <stdio.h>

int main(void)
{
  int A[5][5];
  int X;
  int linha = 0;
  int coluna = 0;
  int found = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  printf("Digite X: ");
  scanf("%d", &X);
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (A[i][j] == X)
      {
        linha = i;
        coluna = j;
        found = 1;
      }
    }
  }
  if (found)
  {
    printf("Linha: %d\n", linha);
    printf("Coluna: %d\n", coluna);
  }
  else
  {
    printf("Não encontrado\n");
  }
  return 0;
}