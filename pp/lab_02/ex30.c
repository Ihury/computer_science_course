/*
Leia um valor em real e a cotaçao do dolar. Em seguida, imprima o valor correspondente em 
dolares.
*/
#include <stdio.h>

int main(void) {
    float real, cotacao, dolar;
    printf("Digite um valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    dolar = real/cotacao;
    printf("O valor em dolares eh: %.2f", dolar);
    return 0;
}