/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na 
ordem inversa.
*/
#include <stdio.h>

int main(void)
{
  int A[6];
  for (int i = 0; i < 6; i++)
  {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &A[i]);
  }
  for (int i = 5; i >= 0; i--)
  {
    printf("%d\n", A[i]);
  }
  return 0;
}