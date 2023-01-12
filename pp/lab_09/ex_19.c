/*
Escreva  uma  função  que  aceita  como  parâmetro  um  array  de  inteiros  com  N  valores,  e 
determina o maior elemento do array e o número de vezes que este elemento ocorreu no 
array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a 
função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando que 
o número 15 ocorreu 3 vezes). A função deve ser do tipo void.
*/
#include <stdio.h>

void obterMaior(int *array, int size, int *maior, int *ocorrencias);

void main() {
  int array[10];
  int maior, ocorrencias;

  for (int i = 0; i < 10; i++) {
    scanf("%d", array + i);
  }

  obterMaior(array, 10, &maior, &ocorrencias);

  printf("Maior: %d\nOcorrencias: %d\n", maior, ocorrencias);
}

void obterMaior(int *array, int size, int *maior, int *ocorrencias) {
  *maior = *array;
  *ocorrencias = 1;

  for (int i = 1; i < size; i++) {
    if (*(array + i) > *maior) {
      *maior = *(array + i);
      *ocorrencias = 1;
    } else if (*(array + i) == *maior) {
      *ocorrencias += 1;
    }
  }
}