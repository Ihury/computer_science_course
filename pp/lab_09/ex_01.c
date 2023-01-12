#include <stdio.h>

void main()
{
  int a = 0, *pa;
  float b = 1.1, *pb;
  char c = 'a', *pc;

  pa = &a;
  pb = &b;
  pc = &c;

  printf("a = %d, b = %f, c = %c\n", a, b, c);

  *pa = 1;
  *pb = 2.2;
  *pc = 'b';

  printf("a = %d, b = %f, c = %c\n", a, b, c);
}