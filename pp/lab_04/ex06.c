/*
Faça um programa que leia 10 inteiros e imprima sua média. 
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
    printf("A média dos valores digitados é %d\n", sum / 10);
    return 0;
}