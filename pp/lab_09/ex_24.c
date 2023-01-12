/*
 Escreva  uma  função  que  receba  um  array  de  inteiros  V  e  os  endereços  de  duas  variáveis 
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva 
também uma função main que use essa função.
*/
#include <stdio.h>

void obterMinMax(int *array, int size, int *min, int *max);

void main() {
  int array[10];
  int min, max;

  for (int i = 0; i < 10; i++) {
    scanf("%d", array + i);
  }

  obterMinMax(array, 10, &min, &max);

  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
}

void obterMinMax(int *array, int size, int *min, int *max) {
  *min = *array;
  *max = *array;

  for (int i = 1; i < size; i++) {
    if (*(array + i) < *min) {
      *min = *(array + i);
    }

    if (*(array + i) > *max) {
      *max = *(array + i);
    }
  }
}