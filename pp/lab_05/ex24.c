/*
Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a 
saída para n = 6 seria: 
 
     * 
    *** 
   ***** 
  ******* 
 ********* 
***********
*/
#include <stdio.h>

void printTriangle(int n);

void main()
{
    int n;

    scanf("%d", &n);
    printTriangle(n);
}

void printTriangle(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}