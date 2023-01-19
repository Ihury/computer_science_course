/*
Faça  um  programa  que  leia  números  do  teclado  e  os  armazene  em  um  vetor  alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade.
Os números serão digitados um a um e, sendo que caso ele  deseje  encerrar a entrada de
dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste
modo:
a) Inicie com um vetor de tamanho 10 alocado dinamicamente;
b) Após,  caso  o vetor  alocado  esteja  cheio,  aloque  um novo  vetor  do  tamanho  do  vetor
anterior adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);
c) Copie os valores já digitados da área inicial para esta área maior e libere a memória da
área inicial;
d) Repita  este  procedimento  de  expandir  dinamicamente  com  mais  10  valores  o  vetor
alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser “expandido” de 10
em 10 valores.
Ao final, exiba o vetor lido. Não use a função REALLOC.
*/
#include <stdio.h>

void realocar(int *p, int *n);

int main(void)
{
  int *p, i = 0, n = 10, num = 1;

  p = (int *) malloc(n * sizeof(int));

  while (num != 0)
  {
    if (i % 10 == 0)
    {
      n += 10;
      realocar(p, &n);
    }
    printf("Digite um número: ");
    scanf("%d", &num);
    p[i] = num;
    i++;
  }

  for (i = 0; i < n; i++)
  {
    printf("%d ", p[i]);
  }

  free(p);

  return 0;
}

void realocar(int *p, int *n)
{
  int *p2;

  p2 = (int *)malloc(*n * sizeof(int));

  for (int i = 0; i < *n; i++)
  {
    p2[i] = p[i];
  }

  p = p2;

  free(p2);
}