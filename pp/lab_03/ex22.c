/*
Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou nao se 
aposentar. As condições para aposentadoria sao 
 Ter pelo menos 65 anos; 
 Ou ter trabalhado pelo menos 30 anos; 
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/
#include <stdio.h>

int main()
{
    int idade, tempo_servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço do trabalhador: ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador pode se aposentar.");
    } else {
        printf("O trabalhador nao pode se aposentar.");
    }

    return 0;
}