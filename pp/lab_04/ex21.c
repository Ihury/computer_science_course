/*
 Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são 
números informados pelo usuário.
*/
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    int i = a;
    int count = 0;
    while (i <= b) {
        int j = 1;
        int divisors = 0;
        while (j <= i) {
            if (i % j == 0) {
                divisors++;
            }
            j++;
        }
        if (divisors == 2) {
            count++;
        }
        i++;
    }
    printf("Existem %d números primos entre %d e %d\n", count, a, b);
    return 0;
}