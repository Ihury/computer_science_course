/*
Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo 
em vista que o desconto foi de 12%.
*/
#include <stdio.h>

int main(void) {
    float valor, desconto;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    desconto = valor*0.12;
    printf("O valor com desconto eh: %.2f", valor-desconto);
    return 0;
}