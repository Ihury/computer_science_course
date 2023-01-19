/*
Faça um programa que leia um número N e: 
a) Crie dinamicamente e leia um vetor de inteiro de N posições; 
b) Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no 
vetor.
*/
#include <stdio.h>

int main(void) {
    int *p, i, n, x, cont = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    p = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &p[i]);
    }
    printf("Digite um número: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (p[i] % x == 0) {
            cont++;
        }
    }
    printf("Existem %d múltiplos de %d no vetor.\n", cont, x);
    free(p);
    return 0;
}