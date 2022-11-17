/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números 
naturais ímpares.
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    int i = 1;
    int count = 0;
    while (count < n) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    return 0;
}