/*
 Faça  um  programa  que  leia  um  número  inteiro  positivo  N  e  imprima  todos  os  números 
naturais de 0 até N em ordem crescente.
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}