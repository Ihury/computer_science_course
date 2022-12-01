/*
Faça um programa que leia duas matrizes 2  × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes
*/
#include <stdio.h>

int main(void)
{
  int A[2][2], B[2][2];
  int opcao;
  int constante;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite o %dº valor da matriz A: ", i * 2 + j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite o %dº valor da matriz B: ", i * 2 + j + 1);
      scanf("%d", &B[i][j]);
    }
  }
  printf("1 - Somar as duas matrizes\n");
  printf("2 - Subtrair a primeira matriz da segunda\n");
  printf("3 - Adicionar uma constante às duas matrizes\n");
  printf("4 - Imprimir as matrizes\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &opcao);
  switch (opcao)
  {
  case 1:
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", A[i][j] + B[i][j]);
      }
      printf("\n");
    }
    break;
  case 2:
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", A[i][j] - B[i][j]);
      }
      printf("\n");
    }
    break;
  case 3:
    printf("Digite a constante: ");
    scanf("%d", &constante);
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", A[i][j] + constante);
      }
      printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", B[i][j] + constante);
      }
      printf("\n");
    }
    break;
  case 4:
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", A[i][j]);
      }
      printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", B[i][j]);
      }
      printf("\n");
    }
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
  return 0;
}