/*
Faça  uma  prova  de  matemática  para  crianças  que  estao  aprendendo  a  somar  numeros 
inteiros  menores  do  que  100.  Escolha  numeros  aleatorios  entre  1  e  100,  e  mostre  na  tela  a 
pergunta: qual e a soma de a + b, onde a e b sao os numeros aleatorios. Peça a resposta. Faça 
cinco  perguntas  ao  aluno,  e  mostre  para  ele  as  perguntas  e  as  respostas  corretas,  alem  de 
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

        printf("Qual e a soma de %d + %d? ", num1, num2);
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