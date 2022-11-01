/*
Escreva o menu de opções abaixo. Leia a opçao do usuário e execute a operaçao escolhida. 
Escreva uma mensagem de erro se a opçao for inválida. 
Escolha a opçao: 
1- Soma de 2 numeros. 
2- Diferença entre 2 numeros (maior pelo menor). 
3- Produto entre 2 numeros. 
4- Divisao entre 2 numeros (o denominador nao pode ser zero). 
Opçao
*/
#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2;

    printf("Escolha uma opçao:\n");
    printf("1 - Soma\n");
    printf("2 - Diferença\n");
    printf("3 - Produto\n");
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
            printf("A diferença e: %f", num1 - num2);
            break;
        case 3:
            printf("O produto e: %f", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("A divisao e: %f", num1 / num2);
            } else {
                printf("O denominador nao pode ser zero.");
            }
            break;
        default:
            printf("Opçao inválida.");
    }

    return 0;
}