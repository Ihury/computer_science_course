/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/
#include <stdio.h>

int main(void) {
    int i = 0;
    int min = 0;
    int max = 0;
    while (i < 10) {
        int value;
        printf("Digite um valor: ");
        scanf("%d", &value);
        if (i == 0) {
            min = value;
            max = value;
        } else {
            if (value < min) {
                min = value;
            }
            if (value > max) {
                max = value;
            }
        }
        i++;
    }
    printf("O menor valor digitado foi %d\n", min);
    printf("O maior valor digitado foi %d\n", max);
    return 0;
}