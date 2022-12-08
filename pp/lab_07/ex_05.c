/*
Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras 
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
*/
#include <stdio.h>

void main()
{
  char str[100];
  int i;

  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] += 32;
    }
  }
  printf("%s", str);
}