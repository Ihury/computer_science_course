#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Global Constants
const char Ordem[14] = {'4','5','6','7','Q','J','K','A','2','3','O','E','C','P'};
const char Cartas[10] = {'4','5','6','7','Q','J','K','A','2','3'};
const char Suits[4] = {5,3,6,4};

//Structures for the cards in the deck
typedef struct card
{
    char face;
    char naipe;
    char valor;
}card;

//Hands Structure
typedef struct Hand
{
    card mao[3]; 
}Hand;

Hand player, machine;
int Jogadas_Maquina = 0, Jogadas_Player = 0;

//Deck
card Deck[40];

void Order(card *M);
void Player_Play(card *round, int primeiro);
void Machine_Play(card *round, int primeiro);
int randomico(int MAX);

//Function to decide the order for the distribution
int sobe_desce(void){
    int c = 0;
    printf("Faca sua escolha:\n 1 - Sobe \n 2 - Desce\n");
    scanf(" %d", &c);
    if (c == 1)
    {
        return 1;
    }else if (c == 2)
    {
        return 0;
    }
}

//Function to distribute cards for the players
void Dealer(void){
    srand(time(NULL));
    int p; 
    int m;
    int c;
    c = sobe_desce();
    if (c)
    {
        p = 0;
        m = p + 3;
        for (int i = 0; i < 3; i++)
        {
            player.mao[i].face = Deck[p].face;
            player.mao[i].naipe = Deck[p].naipe;
            player.mao[i].valor = Deck[p].valor;
            Order(&player.mao[i]);
            machine.mao[i].face = Deck[m].face;
            machine.mao[i].naipe = Deck[m].naipe;
            machine.mao[i].valor = Deck[m].valor;
            Order(&machine.mao[i]);
            p++;
            m++;
        }
    }else
    {
        p = 39;
        m = p - 3;
        for (int i = 0; i < 3; i++)
        {
            player.mao[i].face = Deck[p].face;
            player.mao[i].naipe = Deck[p].naipe;
            player.mao[i].valor = Deck[p].valor;
            Order(&player.mao[i]);
            machine.mao[i].face = Deck[m].face;
            machine.mao[i].naipe = Deck[m].naipe;
            machine.mao[i].valor = Deck[m].valor;
            Order(&machine.mao[i]);
            p--;
            m--;
        }
    }
}

//Function show hands
void ShowHands(void){
    printf("------------------------------------------------------\n");
    printf("Mao do jogador: \n");
    for (int i = 0; i < 3; i++)
    {
        if (player.mao[i].valor == 'O')
        {
            printf("%c%c - Ouros \n", player.mao[i].face, player.mao[i].naipe);
        }else if (player.mao[i].valor == 'E')
        {
            printf("%c%c - Espadas \n", player.mao[i].face, player.mao[i].naipe);
        }else if (player.mao[i].valor == 'C')
        {
            printf("%c%c - Copas \n", player.mao[i].face, player.mao[i].naipe);
        }else if (player.mao[i].valor == 'P')
        {
            printf("%c%c - Paus \n", player.mao[i].face, player.mao[i].naipe);
        }else
        {
            printf("%c%c \n", player.mao[i].face, player.mao[i].naipe);
        }
    }
    printf("------------------------------------------------------\n");
    printf("Mao da Maquina: \n");
    for (int i = 0; i < 3; i++)
    {
        if (machine.mao[i].valor == 'O')
        {
            printf("%c%c - Ouros \n", machine.mao[i].face, machine.mao[i].naipe);
        }else if (machine.mao[i].valor == 'E')
        {
            printf("%c%c - Espadas \n", machine.mao[i].face, machine.mao[i].naipe);
        }else if (machine.mao[i].valor == 'C')
        {
            printf("%c%c - Copas \n", machine.mao[i].face, machine.mao[i].naipe);
        }else if (machine.mao[i].valor == 'P')
        {
            printf("%c%c - Paus \n", machine.mao[i].face, machine.mao[i].naipe);
        }else
        {
            printf("%c%c \n", machine.mao[i].face, machine.mao[i].naipe);
        }
    }
    printf("------------------------------------------------------\n");
}

//Function to Shuffle the Deck
void Shuffle(void){
    srand(time(NULL));
    int f = 0;
    int n = 0;
    for (int i = 0; i < 40; i++)
    {
        Deck[i].face = Cartas[f];
        Deck[i].naipe = Suits[n];
        Deck[i].valor = Cartas[f];
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

//Funtion to set the order value
void Order(card *M){
    if (M->face == '7')
    {
        if (M->naipe == Suits[1])
        {
            M->valor = 'C';
        }else if (M->naipe == Suits[3])
        {
            M->valor = 'O';
        }
    }
    if (M->face == 'A' && M->naipe == Suits[2])
    {
        M->valor = 'E';
    }
    if (M->face == '4' && M->naipe == Suits[0])
    {
        M->valor = 'P';
    }
    return;
}


void Machine_Play(card *round, int primeiro){
    int rand = randomico(3 - Jogadas_Maquina);
    card Maquina_Jogou, Guarda;
    Maquina_Jogou = machine.mao[rand];
    Guarda = machine.mao[2 - Jogadas_Maquina];
    machine.mao[2 - Jogadas_Maquina] = machine.mao[rand];
    machine.mao[rand] = Guarda;
    Jogadas_Maquina++; 
    printf("A maquina jogou : %c%c \n", Maquina_Jogou.face, Maquina_Jogou.naipe);
    round[1] = Maquina_Jogou;
    if (primeiro)
    {
        Player_Play(round,0);
    }
}

void Player_Play(card *round, int primeiro){
    printf("Escolha sua Carta: \n");
    int j = 1;
    int out = 1;
    int i = Jogadas_Player;
    card Player_Jogou, Guarda;
    for (i ; i < 3; i++)
    {
    printf("%d - %c%c \n", j, player.mao[i].face, player.mao[i].naipe);
    j++;
    }
    scanf("%d", &j);
    while (out)
    {
        switch (j)
        {
        case 1:
            Player_Jogou = player.mao[Jogadas_Player];
            out = 0;
            break;
        case 2:
            Player_Jogou = player.mao[Jogadas_Player + 1];
            Guarda = player.mao[Jogadas_Player];
            player.mao[Jogadas_Player] = Player_Jogou;
            player.mao[Jogadas_Player + 1] = Guarda;
            out = 0;
            break;
        case 3:
            Player_Jogou = player.mao[2];
            Guarda = player.mao[Jogadas_Player];
            player.mao[Jogadas_Player] = Player_Jogou;
            player.mao[2] = Guarda;
            out = 0;
            break;
        default:
            printf("ERROR\n");
            printf("Escolha de novo: ");
            scanf("%d", &j);
            out = 1;
            break;
        }
    }
    if (primeiro)
    {
        Machine_Play(round,0);
    }
    Jogadas_Player++;
    round[0] = Player_Jogou;
}

int randomico(int MAX){
    srand(time(NULL));
    return rand() % MAX;
}

void Rodada(card *Disputa, int *Player_R, int *Machi_R){
    int forca_p;
    int forca_m;
    for (int i = 0; i < 14; i++)
    {
        if (Disputa[0].valor == Ordem[i])
        {
            forca_p = i;
        }
        if (Disputa[1].valor == Ordem[i])
        {
            forca_m = i;
        }
    }
    if (forca_p > forca_m)
    {
        *Player_R += 1;
        printf("--------------------------------------------------------------------\n");
        printf("O Player Ganhou a rodada!!! \n");
        printf("--------------------------------------------------------------------\n");
    }else if (forca_p == forca_m)
    {
        *Player_R += 1;
        *Machi_R += 1;
        printf("--------------------------------------------------------------------\n");
        printf("Empate!!! \n");
        printf("--------------------------------------------------------------------\n");
    }else if (forca_m > forca_p)
    {
        *Machi_R += 1;
        printf("--------------------------------------------------------------------\n");
        printf("A Maquina Ganhou a rodada!!! \n");
        printf("--------------------------------------------------------------------\n");
    }
    return ;
}

void Jogar(){
    int primeiro = randomico(2);
    int rodada = 0;
    int Player_pontos = 0;
    int Player_R = 0;
    int Machi_pontos = 0;
    int Machi_R = 0;
    card round[2];
    while (Player_pontos < 12 && Machi_pontos < 12)
    {
        if (primeiro)
        {
            Shuffle();
            Dealer();
            ShowHands();
            for (int i = 1; i < 4; i++)
            {
                if (i%2)
                {
                    if(Player_R == 2 || Machi_R == 2){break;};
                    Player_Play(&round[0], 1);
                    Rodada(&round[0], &Player_R, &Machi_R);  
                }else
                {
                    if(Player_R == 2 || Machi_R == 2){break;};
                    Machine_Play(&round[0], 1);
                    Rodada(&round[0], &Player_R, &Machi_R);  
                }
            }
            primeiro--;
        }else
        {
            Shuffle();
            Dealer();
            ShowHands();
            for (int i = 1; i < 4; i++)
            {
                if (i%2)
                {
                    if(Player_R == 2 || Machi_R == 2){break;};
                    Machine_Play(&round[0], 1);
                    Rodada(&round[0], &Player_R, &Machi_R);   
                }else
                {
                    if(Player_R == 2 || Machi_R == 2){break;};
                    Player_Play(&round[0], 1);
                    Rodada(&round[0], &Player_R, &Machi_R);  
                }
            }
            primeiro++;
        }
    if (Player_R == 2)
    {
        Player_pontos++;
        rodada++;
    }else if (Machi_R == 2)
    {
        Machi_pontos++;
        rodada++;
    }
    printf("--------------------------------------------------------------------\n");
    printf("Player Pontos = %d\n", Player_pontos);
    printf("Maquina Pontos = %d\n", Machi_pontos);
    printf("--------------------------------------------------------------------\n");
    Jogadas_Player = 0;
    Jogadas_Maquina = 0;
    Machi_R = 0;
    Player_R = 0;
    }
    printf("Jogo Acabou\n");
    return ;
}



//Main

void main(){
    int out = 1;
    int escolha = 0;
    printf("BEM VINDO\n");
    while(out)
    {
        printf("Esolha uma opcao: \n1 - Jogar\n2 - Rank\n3 - Sobre\n4 - Sair\n->");
        scanf(" %d", &escolha);
        switch (escolha)
        {
        case 1:
            Jogar();
            break;
        case 2:
            printf("EM OBRAS\n");
            break;
        case 3:
            printf("EM OBRAS\n");
            break;
        case 4:
            return ;
            break;
        default:
            printf("ERROR");
            printf("Digite de novo: ");
            scanf(" %d", &escolha);
            break;
        }
    }
    return ;
}