/*
Escreva uma função que dado um número real passado como parâmetro, retorne a parte 
inteira e a parte fracionária deste número. Escreva um programa que chama esta função. 
Protótipo: 
void frac(float num, int *inteiro, float *frac);
*/
#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

void main() {
  float num, frac_part;
  int int_part;

  printf("Digite um número real: ");
  scanf("%f", &num);

  frac(num, &int_part, &frac_part);

  printf("Parte inteira: %d\n", int_part);
  printf("Parte fracionária: %f\n", frac_part);
}

void frac(float num, int *inteiro, float *frac) {
  *inteiro = (int) num;
  *frac = num - *inteiro;
}