/*
Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em 
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/
#include <stdio.h>

void main()
{
  char str[100], l1, l2;
  int i;

  fgets(str, 100, stdin);
  scanf("%c %c", &l1, &l2);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == l1)
    {
      str[i] = l2;
    }
  }
  printf("%s", str);
}