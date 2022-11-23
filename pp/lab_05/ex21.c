/*
Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas 
com pontos de exclamação, conforme o exemplo abaixo (para n = 5): 
 
! 
!! 
!!! 
!!!! 
!!!!! 

*/
#include <stdio.h>

void printExclamation(int n);

void main()
{
    int n;

    scanf("%d", &n);
    printExclamation(n);
}

void printExclamation(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("!");
        printf("\n");
    }
}