/*
Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no
formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.
*/
#include <stdio.h>

void formatDate(int day, int month, int year);

void main()
{
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);
    formatDate(day, month, year);
}

void formatDate(int day, int month, int year)
{
    char* months[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    printf("%d de %s de %d\n", day, months[month - 1], year);
}