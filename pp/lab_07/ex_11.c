/*
Escreva  um  programa  que  recebe  uma  string  S  e  inteiros  não-negativos  I  e  J  e  imprima  o 
segmento S[I..J].
*/
#include <stdio.h>

void main()
{
  char str[100];
  int i, j;

  fgets(str, 100, stdin);
  scanf("%d %d", &i, &j);
  for (; i <= j; i++)
  {
    printf("%c", str[i]);
  }
  printf("\n");
}