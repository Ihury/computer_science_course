/*
Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas 
do chamado Triangulo de Floyd. Para n = 6, temos: 
 
1 
2  3 
4  5  6 
7  8  9  10 
11 12 13 14 15 
16 17 18 19 20 21
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    int i = 1;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("%d ", count);
            count++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}