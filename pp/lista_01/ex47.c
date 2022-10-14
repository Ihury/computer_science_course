/*
Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/
#include <stdio.h>

int main(void) {
    int numero_lido;
    printf("Digite um numero inteiro positivo de quatro digitos: ");
    scanf("%d", &numero_lido);

    printf("%d\n", numero_lido/1000);
    printf("%d\n", (numero_lido%1000)/100);
    printf("%d\n", (numero_lido%100)/10);
    printf("%d\n", numero_lido%10);

    return 0;
}