/*
Faça um programa que mostre ao usuário um menu com 4 opções de operações 
matemáticas  (as  básicas,  por  exemplo).  O  usuário  escolhe  uma  das  opções  e  o  seu  programa 
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.
*/
#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2;

    printf("Escolha uma opção:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            printf("A soma é: %f", num1 + num2);
            break;
        case 2:
            printf("A subtração é: %f", num1 - num2);
            break;
        case 3:
            printf("A multiplicação é: %f", num1 * num2);
            break;
        case 4:
            printf("A divisão é: %f", num1 / num2);
            break;
        default:
            printf("Opção inválida.");
    }

    return 0;
}