/*
Escreva  um  programa  que  leia  um  número  inteiro  e  calcule  a  soma  de  todos  os  divisores 
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 
6 + 11 + 22 + 33 = 78
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    int i = 1;
    int sum = 0;
    while (i < n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }
    printf("A soma dos divisores de %d é %d\n", n, sum);
    return 0;
}