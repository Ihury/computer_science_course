/*
Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu 
dobro.
*/
#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("A soma eh: %d", (numero*3)+1+(numero*2)-1);
    return 0;
}