/*
Faça um programa que peça ao usuário para digitar 10 valores e some-os
*/
#include <stdio.h>

int main(void) {
    int i = 0;
    int sum = 0;
    while (i < 10) {
        int value;
        printf("Digite um valor: ");
        scanf("%d", &value);
        sum += value;
        i++;
    }
    printf("A soma dos valores digitados é %d\n", sum);
    return 0;
}