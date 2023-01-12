#include <stdio.h>

void main()
{
  int a = 0, b = 0;

  printf("%d\n", &a > &b ? &a : &b);
}