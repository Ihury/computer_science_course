/*
Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
*/
#include <stdio.h>

int main(void) {
    int i = 1;
    int sum = 0;
    while (i < 2000000) {
        int j = 1;
        int count = 0;
        while (j <= i) {
            if (i % j == 0) {
                count++;
            }
            j++;
        }
        if (count == 2) {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}