/*
Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os 
espaços em branco do vetor e depois escrever o vetor resultante.
*/
#include <stdio.h>

void main()
{
  char str[100];
  int i, j;

  fgets(str, 100, stdin);
  for (i = 0, j = 0; str[i] != '\0'; i++)
  {
    if (str[i] != ' ')
    {
      str[j] = str[i];
      j++;
    }
  }
  str[j] = '\0';
  printf("%s", str);
}