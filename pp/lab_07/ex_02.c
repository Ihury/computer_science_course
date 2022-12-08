/*
Faça  um  programa  que  conte  o  número  de 1’s que aparecem  em  uma  string.  Exemplo:
“0011001” -> 3
*/
#include <stdio.h>

void main()
{
  char str[100];
  int i, count = 0;

  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == '1')
    {
      count++;
    }
  }
  printf("A string tem %d 1's\n", count);
}