/*
Faça  um  programa  que  leia  três valores  inteiros  e  chame  uma  função  que  receba  estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir
os valores ordenados na tela.
*/
#include <stdio.h>

void main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int *p = &a;
  int *q = &b;
  int *r = &c;

  int result = sort(p, q, r);

  if (result == 1)
  {
    printf("Os valores sao iguais\n");
  }
  else
  {
    printf("%d %d %d\n", a, b, c);
  }
}