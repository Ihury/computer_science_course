/*
Faça  um  programa  que  leia  uma  quantidade  qualquer  de  números  armazenando-os  na 
memória  e  pare  a  leitura  quando  o  usuário  entrar  um  número  negativo.  Em  seguida, 
imprima o vetor lido. Use a função REALLOC. 
*/
#include <stdio.h>

int main(void) {
    int *p, i, n, num;
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