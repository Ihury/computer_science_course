/*
Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
*/
#include <stdio.h>

void main()
{
  char nome[100];
  float valor, desconto, valor_a_vista;

  fgets(nome, 100, stdin);
  scanf("%f", &valor);
  desconto = valor * 0.1;
  valor_a_vista = valor - desconto;
  printf("\nNome: %s\n", nome);
  printf("Valor total: %.2f\n", valor);
  printf("Desconto: %.2f\n", desconto);
  printf("Valor a vista: %.2f\n", valor_a_vista);
}