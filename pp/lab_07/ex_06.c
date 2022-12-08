/*
Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 
32 dos caracteres cujo código ASCII está entre 97 e 122.
*/
#include <stdio.h>

void main()
{
  char str[100];
  int i;

  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32;
    }
  }
  printf("%s", str);
}