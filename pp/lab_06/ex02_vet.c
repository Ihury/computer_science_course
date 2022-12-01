/*
Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores 
X e Y quaisquer correspondentes a duas posições no vetor. Ao  final seu programa deverá 
escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>

int main(void)
{
  int A[8];
  int X, Y;
  for (int i = 0; i < 8; i++)
  {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &A[i]);
  }
  printf("Digite X: ");
  scanf("%d", &X);
  printf("Digite Y: ");
  scanf("%d", &Y);
  printf("Soma: %d\n", A[X] + A[Y]);
  return 0;
}