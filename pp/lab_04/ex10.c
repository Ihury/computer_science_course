/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 
*/
#include <stdio.h>

int main(void) {
    int i = 1;
    int count = 0;
    int sum = 0;
    while (count < 50) {
        if (i % 2 == 0) {
            sum += i;
            count++;
        }
        i++;
    }
    printf("A soma dos 50 primeiros números pares é %d\n", sum);
    return 0;
}