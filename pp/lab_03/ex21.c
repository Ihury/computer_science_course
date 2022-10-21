/*
Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
Escreva uma mensagem de erro se a opção for inválida. 
Escolha a opção: 
1- Soma de 2 números. 
2- Diferença entre 2 números (maior pelo menor). 
3- Produto entre 2 números. 
4- Divisão entre 2 números (o denominador não pode ser zero). 
Opção
*/
#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2;

    printf("Escolha uma opção:\n");
    printf("1 - Soma\n");
    printf("2 - Diferença\n");
    printf("3 - Produto\n");
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
            printf("A diferença é: %f", num1 - num2);
            break;
        case 3:
            printf("O produto é: %f", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("A divisão é: %f", num1 / num2);
            } else {
                printf("O denominador não pode ser zero.");
            }
            break;
        default:
            printf("Opção inválida.");
    }

    return 0;
}