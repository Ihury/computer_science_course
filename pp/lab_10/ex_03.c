/*
Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
dinâmica  de  memória.  Em  seguida,  leia  do  usuário  seus  valores  e  mostre  quantos  dos
números são pares e quantos são ímpares.
*/
#include <stdio.h>

int main(void)
{
  int *p, i, n, par = 0, impar = 0;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &p[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (p[i] % 2 == 0)
    {
      par++;
    }
    else
    {
      impar++;
    }
  }
  printf("Pares: %d\n", par);
  printf("Impares: %d\n", impar);
  free(p);
  return 0;
}