/*
Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocação 
dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido. 
*/
#include <stdio.h>

int main(void) {
    int *p, i, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    p = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &p[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}