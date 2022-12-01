/*
Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram 
o maior e o menor valor.
*/
#include <stdio.h>

int main(void)
{
  int A[5];
  int maior = 0;
  int menor = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &A[i]);
    if (A[i] > A[maior])
    {
      maior = i;
    }
    if (A[i] < A[menor])
    {
      menor = i;
    }
  }
  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);
  return 0;
}