/*
Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores 
do tipo int, usando a função de alocação dinâmica de memória CALLOC: 
a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com 
zero (conte os 1500 zeros do vetor); 
b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor; 
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor. 
*/
#include <stdio.h>

int main(void) {
    int *p, i, cont = 0;
    p = (int *) calloc(1500, sizeof(int));
    for (i = 0; i < 1500; i++) {
        if (p[i] == 0) {
            cont++;
        }
    }
    printf("Existem %d zeros no vetor.\n", cont);
    for (i = 0; i < 1500; i++) {
        p[i] = i;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    for (i = 1490; i < 1500; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}