/*
Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que 
são primos e suas respectivas posições no vetor.
*/
#include <stdio.h>

int main(void)
{
  int A[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    int primo = 1;
    for (int j = 2; j < A[i]; j++)
    {
      if (A[i] % j == 0)
      {
        primo = 0;
        break;
      }
    }
    if (primo)
    {
      printf("Posição %d: %d\n", i, A[i]);
    }
  }
  return 0;
}