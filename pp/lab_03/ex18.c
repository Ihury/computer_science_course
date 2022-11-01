/*
Faça um programa que mostre ao usuário um menu com 4 opções de operações 
matemáticas  (as  básicas,  por  exemplo).  O  usuário  escolhe  uma  das  opções  e  o  seu  programa 
entao pede dois valores numericos e realiza a operaçao, mostrando o resultado e saindo.
*/
#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2;

    printf("Escolha uma opçao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtraçao\n");
    printf("3 - Multiplicaçao\n");
    printf("4 - Divisao\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            printf("A soma e: %f", num1 + num2);
            break;
        case 2:
            printf("A subtraçao e: %f", num1 - num2);
            break;
        case 3:
            printf("A multiplicaçao e: %f", num1 * num2);
            break;
        case 4:
            printf("A divisao e: %f", num1 / num2);
            break;
        default:
            printf("Opçao inválida.");
    }

    return 0;
}