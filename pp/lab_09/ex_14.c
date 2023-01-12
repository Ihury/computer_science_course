/*
Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array. 
A função deverá preencher os elementos de array com esse valor. Não utilize índices para 
percorrer o array, apenas aritmética de ponteiros.
*/
#include <stdio.h>

void fillArray(int *array, int value, int size);

void main() {
  int array[5];

  fillArray(array, 10, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", array[i]);
  }
}

void fillArray(int *array, int value, int size) {
  for (int i = 0; i < size; i++) {
    *(array + i) = value;
  }
}