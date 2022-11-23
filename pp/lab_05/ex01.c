/*
Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
*/
#include <stdio.h>

int dobro(int num);

void main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O dobro de %d eh %d\n", numero, dobro(numero));
}

int dobro(int num) {
    return num * 2;
}