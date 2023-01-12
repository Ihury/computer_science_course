#include <stdio.h>

void soma(int *a, int *b);

void main() {
  int a, b;

  scanf("%d %d", &a, &b);

  soma(&a, &b);

  printf("%d\n", a);
}

void soma(int *a, int *b) {
  *a += *b;
}