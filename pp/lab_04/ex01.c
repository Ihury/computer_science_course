/*
Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando 
números maiores que 0.
*/
#include <stdio.h>

int main(void) {
    int i = 1;
    int count = 0;
    while (count < 5) {
        if (i % 3 == 0) {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    return 0;
}