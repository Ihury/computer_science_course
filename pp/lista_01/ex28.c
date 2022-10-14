/*
Faça a leitura de  três valores e  apresente  como resultado a soma dos quadrados dos três 
valores lidos. 
*/
#include <stdio.h>

int main(void) {
    float a, b, c, soma;
    printf("Digite tres valores: ");
    scanf("%f %f %f", &a, &b, &c);
    soma = a*a + b*b + c*c;
    printf("A soma dos quadrados dos tres valores eh: %.2f", soma);
    return 0;
}