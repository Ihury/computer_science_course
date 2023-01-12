/*
Escreva  uma  função  que  retorna  o  maior  valor  de  um  array  de  tamanho  N.  Escreva  um 
programa que leia N valores inteiros, imprima o array com ‘k’ elementos por linha, e o maior 
elemento. O valor de ‘k’ também deve ser fornecido pelo usuário.
*/
#include <stdio.h>

int obterMaior(int *array, int size);

void main() {
  int array[10];

  for (int i = 0; i < 10; i++) {
    scanf("%d", array + i);
  }

  printf("Maior: %d\n", obterMaior(array, 10));
}

int obterMaior(int *array, int size) {
  int maior = *array;

  for (int i = 1; i < size; i++) {
    if (*(array + i) > maior) {
      maior = *(array + i);
    }
  }

  return maior;
}