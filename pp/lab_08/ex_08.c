/*
Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e  seu  valor).  Implemente  a  parte  de  distribuição  (sorteio)  de  cartas  para  2  jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_CARTAS 3
#define NUMERO_DE_JOGADORES 2

struct Carta
{
  char naipe[10];
  char valor[1];
};

void main()
{
  srand(time(NULL));

  char *NAIPES[4] = {"Paus", "Copas", "Espadas", "Ouros"},
       *VALORES[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

  for (int j = 1; j <= NUMERO_DE_JOGADORES; j++)
  {
    printf("Jogador %d:\n", j);
    for (int i = 1; i <= NUMERO_DE_CARTAS; i++)
    {
      printf("Carta %d: %s de %s\n", i, VALORES[rand() % 13], NAIPES[rand() % 4]);
    }
    printf("\n");
  }
}