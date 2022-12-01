/*
Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i 
a posição do elemento no vetor. Em seguida imprima o vetor na tela.
*/
#include <stdio.h>

int main(void)
{
  int A[50];
  for (int i = 0; i < 50; i++)
  {
    A[i] = (i + 5 * i) % (i + 1);
  }
  for (int i = 0; i < 50; i++)
  {
    printf("%d\n", A[i]);
  }
  return 0;
}