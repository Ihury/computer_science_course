/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido 
proporcionalmente ao valor que cada deu para a realizaçao da aposta. Faça um programa que 
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do 
prêmio com base no valor investido.
*/
#include <stdio.h>

int main(void) {
    float valor_investido1, valor_investido2, valor_investido3, premio, ganho1, ganho2, ganho3;
    
    printf("Digite o valor investido pelo primeiro apostador: ");
    scanf("%f", &valor_investido1);
    printf("Digite o valor investido pelo segundo apostador: ");
    scanf("%f", &valor_investido2);
    printf("Digite o valor investido pelo terceiro apostador: ");
    scanf("%f", &valor_investido3);
    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    ganho1 = premio*(valor_investido1/(valor_investido1+valor_investido2+valor_investido3));
    ganho2 = premio*(valor_investido2/(valor_investido1+valor_investido2+valor_investido3));
    ganho3 = premio*(valor_investido3/(valor_investido1+valor_investido2+valor_investido3));

    printf("O primeiro apostador ganhou: %.2f\n", ganho1);
    printf("O segundo apostador ganhou: %.2f\n", ganho2);
    printf("O terceiro apostador ganhou: %.2f\n", ganho3);
    return 0;
}