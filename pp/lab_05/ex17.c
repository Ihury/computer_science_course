/*
Faça  uma  função  que  receba  dois  números  inteiros  positivos  por  parâmetro  e  retorne  a 
soma dos N números inteiros existentes entre eles.
*/
#include <stdio.h>

int sumBetween(int a, int b);

void main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", sumBetween(a, b));
}

int sumBetween(int a, int b)
{
    int sum = 0;

    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }

    for (int i = a + 1; i < b; i++)
        sum += i;

    return sum;
}