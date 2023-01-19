#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Global Constants

const char Cartas[10] = {'4', '5', '6', '7', 'Q', 'J', 'K', 'A', '2', '3'};
const char *Suits[4] = {"♦", "♠", "♥", "♣"};

// Structures for the cards in the deck
typedef struct card
{
    int face, naipe;
} card;

// Hands Structure
typedef struct Hand
{
    card mao[3];
} Hand;

Hand player, machine;

// Structure to store the points
typedef struct Pontos
{
    int playerTotal, machineTotal, playerRound, machineRound;
} Pontos;

// Deck
card Deck[40];

void cls()
{
    printf("\e[1;1H\e[2J");
}

// Function to decide the order for the distribution
int sobe_desce(void)
{
    int c;
    printf("Faca sua escolha:\n 1 - Sobe \n 2 - Desce\n");
    scanf("%d", &c);
    setbuf(stdin, NULL);
    cls();
    if (c == 1)
    {
        return 1;
    }
    else if (c == 2)
    {
        return 0;
    }
}

// Function to distribute cards for the players
void Dealer(void)
{
    srand(time(NULL));
    int p;
    int m;
    int c;
    if (m >= 40)
    {
        m = m - 40;
    }
    c = sobe_desce();
    if (c)
    {
        p = 0;
        m = p + 3;
        for (int i = 0; i < 3; i++)
        {
            player.mao[i].face = Deck[p].face;
            player.mao[i].naipe = Deck[p].naipe;
            machine.mao[i].face = Deck[m].face;
            machine.mao[i].naipe = Deck[m].naipe;
            p++;
            m++;
        }
    }
    else
    {
        p = 39;
        m = p - 3;
        for (int i = 0; i < 3; i++)
        {
            player.mao[i].face = Deck[p].face;
            player.mao[i].naipe = Deck[p].naipe;
            machine.mao[i].face = Deck[m].face;
            machine.mao[i].naipe = Deck[m].naipe;
            p--;
            m--;
        }
    }
}

// Function show hands
void ShowHands(void)
{
    printf("------------------------------------------------------\n");
    printf("Mao do jogador: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d - %c%s \n", i + 1, Cartas[player.mao[i].face], Suits[player.mao[i].naipe]);
    }
    printf("------------------------------------------------------\n");
    printf("Mao da Maquina: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d - %c%s \n", i + 1, Cartas[machine.mao[i].face], Suits[machine.mao[i].naipe]);
    }
    printf("------------------------------------------------------\n");
}

// Function to show the points
void ShowPoints(Pontos points)
{
    printf("TOTAL\t\t|  RODADA\n");
    printf("Voce: %d/12\t|  Voce: %d/3\n", points.playerTotal, points.playerRound);
    printf("Maquina: %d/12\t|  Maquina: %d/3\n", points.machineTotal, points.machineRound);
}

// Function to Shuffle the Deck
void Shuffle(void)
{
    srand(time(NULL));
    int f = 0;
    int n = 0;
    for (int i = 0; i < 40; i++)
    {
        Deck[i].face = f;
        Deck[i].naipe = n;
        n += 1;
        if (n == 4)
        {
            f += 1;
            n = 0;
        }
    }
    for (int s = 0; s < 40; s++)
    {
        int swap = rand() % 40;
        card guarda = Deck[s];
        Deck[s] = Deck[swap];
        Deck[swap] = guarda;
    }
}

void breakLine()
{
    printf("------------------------------------------------------\n");
}

void startGame()
{
    Pontos points;
    points.playerTotal = 0;
    points.machineTotal = 0;
    points.playerRound = 0;
    points.machineRound = 0;

    while (points.playerTotal < 12 && points.machineTotal < 12)
    {
        Shuffle();
        Dealer();
        while ((points.playerRound + points.machineRound) < 3)
        {
            ShowHands();
            ShowPoints(points);
            breakLine();
            printf("Escolha uma carta para jogar: \n");
            int c;
            scanf("%d", &c);
            setbuf(stdin, NULL);
            cls();
            breakLine();
            printf("Voce jogou: %c%s \n", Cartas[player.mao[c - 1].face], Suits[player.mao[c - 1].naipe]);
            breakLine();
            printf("Maquina jogou: %c%s \n", Cartas[machine.mao[0].face], Suits[machine.mao[0].naipe]);
            breakLine();

            breakLine();
            printf("Pontos da rodada: \n");
            ShowPoints(points);
            breakLine();
        }
        printf("Pressione ENTER para continuar...\n");
        getchar();
        cls();
    }
}

// Main
void main()
{
    startGame();
    return;
}