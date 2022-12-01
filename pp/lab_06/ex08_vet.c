/*
Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os 
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso 
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para 
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no 
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o 
vetor final que foi digitado.
*/
#include <stdio.h>

int main(void)
{
  int A[10];
  for (int i = 0; i < 10; i++)
  {
    int valor;
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &valor);
    int existe = 0;
    for (int j = 0; j < i; j++)
    {
      if (A[j] == valor)
      {
        existe = 1;
        break;
      }
    }
    if (existe)
    {
      i--;
      continue;
    }
    A[i] = valor;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", A[i]);
  }
  return 0;
}