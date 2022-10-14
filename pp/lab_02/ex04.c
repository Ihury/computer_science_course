//Leia um número real e imprima o resultado do quadrado desse número.
#include <stdio.h>

int main() {
  float numero;

  printf("Digite um numero real: ");
  scanf("%f", &numero);
  printf("O quadrado do numero digitado foi: %f", numero * numero);

  return 0;
}