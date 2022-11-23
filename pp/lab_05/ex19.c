/*
Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!. 
*/
#include <stdio.h>

int factorial(int n);

void main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", factorial(n));
}

int factorial(int n)
{
    int i, result = 1;

    for (i = 1; i <= n; i++)
        result *= i;

    return result;
}