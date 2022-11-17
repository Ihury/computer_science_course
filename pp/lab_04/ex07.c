/*
 Faça  um  programa  que  leia  10  inteiros  positivos,  ignorando  não  positivos,  e  imprima  sua 
média.
*/
#include <stdio.h>

int main(void) {
    int i = 0;
    int sum = 0;
    int count = 0;
    while (i < 10) {
        int value;
        printf("Digite um valor: ");
        scanf("%d", &value);
        if (value > 0) {
            sum += value;
            count++;
        }
        i++;
    }
    printf("A média dos valores digitados é %d\n", sum / count);
    return 0;
}