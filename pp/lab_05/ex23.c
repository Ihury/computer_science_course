/*
Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, 
a saída para n = 4 seria: 
 
* 
** 
*** 
**** 
*** 
** 
*
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

    for (i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= i; j++)
                printf("*");
        }
        else
        {
            for (j = 1; j <= 2 * n - i; j++)
                printf("*");
        }
        printf("\n");
    }
}