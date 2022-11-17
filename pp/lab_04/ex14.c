/*
Faça um programa que simula o  lançamento de dois dados, d1 e d2, n vezes, e tem como 
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    int i = 0;
    while (i < n) {
        int d1 = rand() % 6 + 1;
        int d2 = rand() % 6 + 1;
        printf("%d %d ", d1, d2);
        if (d1 > d2) {
            printf(">\n");
        } else if (d1 < d2) {
            printf("<\n");
        } else {
            printf("=\n");
        }
        i++;
    }
    return 0;
}