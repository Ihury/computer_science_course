/*
Construa um programa que leia o número de linhas e de colunas de uma matriz de números 
reais,  aloque  espaço  dinamicamente  para  esta  e  a  inicialize  com  valores  fornecidos  pelo 
usuário.  Ao  final,  o  programa  deverá  retornar  a  matriz  na  saída  padrão  com  layout 
apropriado.
*/
#include <stdio.h>

int main(void) {
    int **p, i, j, n, m;
    printf("Digite o tamanho da matriz: ");
    scanf("%d %d", &n, &m);
    p = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        p[i] = (int *)malloc(m * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Digite um número: ");
            scanf("%d", &p[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}