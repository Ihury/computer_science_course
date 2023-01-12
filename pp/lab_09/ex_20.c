/*
Implemente  uma  função  que  receba  como  parâmetro  um  array  de  números  reais  de 
tamanho N e retorne quantos números negativos há nesse array. Essa função deve obedecer 
ao protótipo: 
int negativos(float *vet, int N);
*/
#include <stdio.h>

int negativos(float *vet, int N);

void main() {
  int N;
  float vet[100];

  printf("Digite o tamanho do array: ");
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%f", vet + i);
  }

  printf("Quantidade de números negativos: %d\n", negativos(vet, N));
}

int negativos(float *vet, int N) {
  int count = 0;

  for (int i = 0; i < N; i++) {
    if (*(vet + i) < 0) {
      count++;
    }
  }

  return count;
}