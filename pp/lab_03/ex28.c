/*
 Faça um programa que leia três  números inteiros positivos e efetue o cálculo de uma das 
seguintes médias de acordo com um valor numérico digitado pelo usuário: 

(a)  Geométrica:  √𝑥∗𝑦∗𝑧3   

(b) Ponderada: ([(1∗𝑥)+(2∗𝑦)+(3∗𝑧)])/3  

(c) Harmônica: 1/(1/𝑥)+(1/𝑦)+(1/𝑧)
 
(d) Aritmética: (𝑥+𝑦+𝑧)/3
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3, opcao;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf("Escolha uma opção:\n");
    printf("1 - Geométrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmônica\n");
    printf("4 - Aritmética\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            media = pow(num1 * num2 * num3, 1.0 / 3.0);
            printf("A média geométrica é: %f", media);
            break;
        case 2:
            media = ((1 * num1) + (2 * num2) + (3 * num3)) / 3;
            printf("A média ponderada é: %f", media);
            break;
        case 3:
            media = 1 / ((1.0 / num1) + (1.0 / num2) + (1.0 / num3));
            printf("A média harmônica é: %f", media);
            break;
        case 4:
            media = (num1 + num2 + num3) / 3.0;
            printf("A média aritmética é: %f", media);
            break;
        default:
            printf("Opção inválida.");
    }

    return 0;
}