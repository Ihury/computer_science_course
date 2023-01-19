/*
Faça um programa que leia dois números N e M: 
a) Crie e leia uma matriz N x M de inteiros; 
b) Crie e construa uma matriz transposta M x N de inteiros; 
c) Mostre as duas matrizes. 
*/
#include <stdio.h>

int main() {
    int **p, **t, i, j, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    p = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        p[i] = (int *) malloc(m * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Digite um número: ");
            scanf("%d", &p[i][j]);
        }
    }
    t = (int **) malloc(m * sizeof(int *));
    for (i = 0; i < m; i++) {
        t[i] = (int *) malloc(n * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            t[j][i] = p[i][j];
        }
    }
    printf("Matriz original:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }