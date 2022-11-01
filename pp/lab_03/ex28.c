/*
 Faça um programa que leia três  numeros inteiros positivos e efetue o cálculo de uma das 
seguintes medias de acordo com um valor numerico digitado pelo usuário: 

(a)  Geometrica:  √𝑥∗𝑦∗𝑧3   

(b) Ponderada: ([(1∗𝑥)+(2∗𝑦)+(3∗𝑧)])/3  

(c) Harmônica: 1/(1/𝑥)+(1/𝑦)+(1/𝑧)
 
(d) Aritmetica: (𝑥+𝑦+𝑧)/3
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3, opcao;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Escolha uma opçao:\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmônica\n");
    printf("4 - Aritmetica\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            media = pow(num1 * num2 * num3, 1.0 / 3.0);
            printf("A media geometrica e: %f", media);
            break;
        case 2:
            media = ((1 * num1) + (2 * num2) + (3 * num3)) / 3;
            printf("A media ponderada e: %f", media);
            break;
        case 3:
            media = 1 / ((1.0 / num1) + (1.0 / num2) + (1.0 / num3));
            printf("A media harmônica e: %f", media);
            break;
        case 4:
            media = (num1 + num2 + num3) / 3.0;
            printf("A media aritmetica e: %f", media);
            break;
        default:
            printf("Opçao inválida.");
    }

    return 0;
}