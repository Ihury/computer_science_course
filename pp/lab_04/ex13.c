/*
 Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos 
de 3 ou 5.
*/
#include <stdio.h>

int main(void) {
    int i = 1;
    int sum = 0;
    while (i < 1000) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}