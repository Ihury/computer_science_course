/*
O  custo  ao  consumidor  de  um  carro  novo  e  a  soma  do  custo  de  fábrica,  da  comissao  do 
distribuidor, e dos impostos. A comissao e os impostos sao calculados sobre o custo de fábrica, 
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor. 
 
CUSTO DE FÁBRICA                | % DO DISTRIBUIDOR | % DOS IMPOSTOS 
ate R$12.000,00                 | 5                 | isento 
entre R$12.000,00 e R$25.000,00 | 10                | 15 
acima de R$25.000,00            | 15                | 20
*/
#include <stdio.h>

int main()
{
    float custo_fabrica, custo_consumidor, comissao, impostos;

    printf("Digite o custo de fábrica: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) comissao = 0.05;
    else if (custo_fabrica <= 25000) comissao = 0.1;
    else comissao = 0.15;

    if (custo_fabrica <= 12000) impostos = 0;
    else if (custo_fabrica <= 25000) impostos = 0.15;
    else impostos = 0.2;

    custo_consumidor = custo_fabrica * (1 + comissao + impostos);

    printf("O custo ao consumidor e: %f", custo_consumidor);

    return 0;
}