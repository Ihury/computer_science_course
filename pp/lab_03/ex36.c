/*
 Escreva um programa que, dado o valor da venda, imprima a comissao que deverá ser paga 
ao vendedor. Para calcular a comissao, considere a tabela abaixo: 
 
Venda mensal                                            | Comissao 
Maior ou igual a R$100.000,00                           | R$700,00 + 16% das vendas 
Menor que R$100.000,00 e maior ou igual a R$80.000,00   | R$650,00 + 14% das vendas 
Menor que R$80.000,00 e maior ou igual a R$60.000,00    | R$600,00 + 14% das vendas 
Menor que R$60.000,00 e maior ou igual a R$40.000,00    | R$550,00 + 14% das vendas 
Menor que R$40.000,00 e maior ou igual a R$20.000,00    | R$500,00 + 14% das vendas 
Menor que R$20.000,00                                   | R$400,00 + 14% das vendas
*/
#include <stdio.h>

int main()
{
    float venda, comissao;

    printf("Digite o valor da venda: ");
    scanf("%f", &venda);

    if (venda >= 100000) {
        comissao = 700 + venda * 0.16;
    } else if (venda >= 80000) {
        comissao = 650 + venda * 0.14;
    } else if (venda >= 60000) {
        comissao = 600 + venda * 0.14;
    } else if (venda >= 40000) {
        comissao = 550 + venda * 0.14;
    } else if (venda >= 20000) {
        comissao = 500 + venda * 0.14;
    } else {
        comissao = 400 + venda * 0.14;
    }

    printf("A comissao e: %f", comissao);

    return 0;
}