/*
Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) printf("O número é par.");
    else printf("O número é ímpar.");

    return 0;
}