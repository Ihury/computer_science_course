/*
Faça  uma  prova  de  matemática  para  crianças  que  estão  aprendendo  a  somar  números 
inteiros  menores  do  que  100.  Escolha  números  aleatórios  entre  1  e  100,  e  mostre  na  tela  a 
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça 
cinco  perguntas  ao  aluno,  e  mostre  para  ele  as  perguntas  e  as  respostas  corretas,  além  de 
quantas vezes o aluno acertou. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2, resposta, acertos = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        num1 = rand() % 100 + 1;
        num2 = rand() % 100 + 1;

        printf("Qual é a soma de %d + %d? ", num1, num2);
        scanf("%d", &resposta);

        if (resposta == num1 + num2)
        {
            printf("Resposta correta!\n");
            acertos++;
        }
        else printf("Resposta incorreta!\n");
    }

    printf("Você acertou %d questões.", acertos);

    return 0;
}