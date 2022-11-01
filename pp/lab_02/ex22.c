/*
Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula de 
conversao e: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>

int main(void) {
    float jardas, metros;
    printf("Digite um comprimento em jardas: ");
    scanf("%f", &jardas);
    metros = 0.91*jardas;
    printf("O comprimento em metros eh: %.2f", metros);
    return 0;
}