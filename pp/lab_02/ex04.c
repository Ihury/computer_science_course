//Leia um numero real e imprima o resultado do quadrado desse numero.
#include <stdio.h>

int main() {
  float numero;

  printf("Digite um numero real: ");
  scanf("%f", &numero);
  printf("O quadrado do numero digitado foi: %f", numero * numero);

  return 0;
}