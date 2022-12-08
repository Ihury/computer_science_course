/*
Implemente  um programa que leia duas strings,  str1 e str2, e  um valor inteiro positivo  N. 
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.
*/
#include <stdio.h>

void main()
{
  char str1[100], str2[100];
  int i, j, n;

  fgets(str1, 100, stdin);
  fgets(str2, 100, stdin);
  scanf("%d", &n);
  for (i = 0; str1[i] != '\0'; i++)
  {
  }
  for (j = 0; j < n; j++)
  {
    str1[i + j] = str2[j];
  }
  str1[i + j] = '\0';
  printf("%s", str1);
}