#include <stdio.h>

void alterarValores(int *a, int *b);

void main() {
  int a, b;

  scanf("%d %d", &a, &b);

  alterarValores(&a, &b);

  printf("%d %d\n", a, b);
}

void alterarValores(int *a, int *b) {
  if (*b > *a) {
    int aux = *a;
    *a = *b;
    *b = aux;
  }
}