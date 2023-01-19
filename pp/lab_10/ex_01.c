/*
Crie um programa que: 
a) Aloque dinamicamente um array de 5 números inteiros; 
b) Peça para o usuário digitar os 5 números no espaço alocado; 
c) Mostre na tela os 5 números; 
d) Libere a memória alocada.
*/
#include <stdio.h>

int main(void) {
    int *p, i;
    p = (int *) malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &p[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}