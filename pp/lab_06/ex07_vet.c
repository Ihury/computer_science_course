/*
Faça um programa que receba 6 números inteiros e mostre: 
 Os números pares digitados; 
 A soma dos números pares digitados; 
 Os números ímpares digitados; 
 A quantidade de números ímpares digitados;
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
  int soma_pares = 0;
  int qtd_impares = 0;
  for (int i = 0; i < 6; i++)
  {
    if (A[i] % 2 == 0)
    {
      printf("Par: %d\n", A[i]);
      soma_pares += A[i];
    }
    else
    {
      printf("Ímpar: %d\n", A[i]);
      qtd_impares++;
    }
  }
  printf("Soma dos pares: %d\n", soma_pares);
  printf("Quantidade de ímpares: %d\n", qtd_impares);
  return 0;
}