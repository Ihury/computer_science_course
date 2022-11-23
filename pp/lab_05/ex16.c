/*
Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma 
sequência  de  símbolos  de  igual  (Ex.:  ========).  A  função  recebe  por  parâmetro  quantos 
sinais de igual serão mostrados.
*/
#include <stdio.h>

void drawLine(int number);

void main()
{
    int number;

    scanf("%d", &number);
    drawLine(number);
}

void drawLine(int number)
{
    int i;

    for (i = 0; i < number; i++)
        printf("=");
    printf("\n");
}