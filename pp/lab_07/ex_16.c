/*
Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequência abaixo 
que gere o maior produto:
*/
#include <stdio.h>

void main()
{  
  char str[1000];
  int i, j, prod, max_prod = 0;

  fgets(str, 1000, stdin); 

  for (i = 0; str[i + 4] != '\0' && str[i + 4] != '\n'; i++)
  {
    prod = 1;
    for (j = i; j < i + 5; j++)
    {
      prod *= (str[j] - 48);
    }
    if (prod > max_prod)
    {
      max_prod = prod;
    }
  }
  printf("O maior produto é %d\n", max_prod); 
}