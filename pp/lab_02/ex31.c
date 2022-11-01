/*
Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.
*/
#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("O antecessor eh: %d", numero-1);
    printf("O sucessor eh: %d", numero+1);
    return 0;
}