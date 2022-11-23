/*
Faça uma função que receba dois números e retorne qual deles é o maior.
*/
#include <stdio.h>

int max(int a, int b);

void main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", max(a, b));
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}