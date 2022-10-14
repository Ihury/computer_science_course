// Peça ao usuário para digitar três valores inteiros e imprima a soma deles. 
#include <stdio.h>

int main() {
  int numero1, numero2, numero3;

  printf("Digite tres numeros inteiros: ");
  scanf("%d %d %d", &numero1, &numero2, &numero3);
  printf("A soma dos numeros digitados foi: %d", numero1 + numero2 + numero3);

  return 0;
}