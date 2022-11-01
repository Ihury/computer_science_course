/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre: 
  - o total a pagar com desconto de 10%; 
  - o valor de cada parcela, no parcelamento de 3% sem juros; 
  - a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto); 
  - a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
*/
#include <stdio.h>

int main(void) {
    float valor, desconto, parcela, comissao_vista, comissao_parcelada;

    printf("Digite o valor total: ");
    scanf("%f", &valor);

    desconto = valor*0.1;
    parcela = valor/3;
    comissao_vista = (valor-desconto)*0.05;
    comissao_parcelada = valor*0.05;
    
    printf("O valor com desconto eh: %.2f", valor-desconto);
    printf("O valor de cada parcela eh: %.2f", parcela);
    printf("A comissao do vendedor (a vista) eh: %.2f", comissao_vista);
    printf("A comissao do vendedor (parceada) eh: %.2f", comissao_parcelada);

    return 0;
}