#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    
    int escolhaPrograma = rand() % 3, escolhaUsuario;
    char escolhaDigitada[7];

    printf("Qual jogada você escolha? (pedra, papel, ou tesoura)\n");
    scanf("%s", escolhaDigitada);

    if (strcmp(escolhaDigitada, "papel") == 0) escolhaUsuario = 0;
    else if (strcmp(escolhaDigitada, "pedra") == 0) escolhaUsuario = 1;
    else if (strcmp(escolhaDigitada, "tesoura") == 0) escolhaUsuario = 2;

    if (escolhaUsuario == escolhaPrograma) printf("Empate!");
    else if ((escolhaUsuario == 3 && escolhaPrograma == 0) || escolhaUsuario < escolhaPrograma) printf("Você ganhou!");
    else printf("O Programa ganhou");

    return 0;
}