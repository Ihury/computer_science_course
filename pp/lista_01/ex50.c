/*
Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de  sua 
idade e do ano atual.
*/
#include <stdio.h>

int main(void) {
    int idade, ano_atual, ano_nascimento;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    ano_nascimento = ano_atual - idade;
    printf("O ano de nascimento eh: %d", ano_nascimento);
    return 0;
}