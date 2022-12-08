/*
Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa 
palavra.  Entre  com  um  caractere  (vogal  ou  consoante)  e  substitua  todas  as  vogais  da  palavra 
dada por esse caractere. 
*/
#include <stdio.h>

void main()
{
  char str[100], c;
  int i, count = 0;

  fgets(str, 100, stdin);
  scanf("%c", &c);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      str[i] = c;
      count++;
    }
  }
  printf("A string tem %d vogais\n", count);
  printf("%s", str);
}