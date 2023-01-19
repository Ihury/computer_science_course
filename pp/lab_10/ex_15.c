/*
Faça um programa que leia dois números N e M e: 
a) Crie e leia uma matriz de inteiros N x M; 
b) Localize os três maiores números de uma matriz e mostre a linha e a coluna onde estão.
*/
#include <stdio.h>

int main() {
    int **p, i, j, n, m, maior1, maior2, maior3, linha1, linha2, linha3, coluna1, coluna2, coluna3;
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
    maior1 = p[0][0];
    maior2 = p[0][0];
    maior3 = p[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (p[i][j] > maior1) {
                maior1 = p[i][j];
                linha1 = i;
                coluna1 = j;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (p[i][j] > maior2 && p[i][j] < maior1) {
                maior2 = p[i][j];
                linha2 = i;
                coluna2 = j;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (p[i][j] > maior3 && p[i][j] < maior2) {
                maior3 = p[i][j];
                linha3 = i;
                coluna3 = j;
            }
        }
    }
    printf("Maior 1: %d, Linha: %d, Coluna: %d\n", maior1, linha1, coluna1);
    printf("Maior 2: %d, Linha: %d, Coluna: %d\n", maior2, linha2, coluna2);
    printf("Maior 3: %d, Linha: %d, Coluna: %d\n", maior3, linha3, coluna3);

    for (i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}