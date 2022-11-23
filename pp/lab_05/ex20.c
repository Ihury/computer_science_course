/*
Escreva uma função para determinar a quantidade de números primos abaixo de N.
*/
#include <stdio.h>

int countPrimes(int n);

void main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", countPrimes(n));
}

int countPrimes(int n)
{
    int i, j, count = 0;

    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
            count++;
    }

    return count;
}