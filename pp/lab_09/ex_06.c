#include <stdio.h>

int somarDobro(int *a, int *b);

void main()
{
  int a, b;

  scanf("%d %d", &a, &b);

  int dobro = somarDobro(&a, &b);

  printf("%d\n", dobro);
}

int somarDobro(int *a, int*b) {
  *a = 2 * *a;
  *b = 2 * *b;

  return *a + *b;
}

