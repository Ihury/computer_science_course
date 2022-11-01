/*
Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula de 
conversao e: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>

int main(void) {
    float jardas, metros;
    printf("Digite um comprimento em metros: ");
    scanf("%f", &metros);
    jardas = metros/0.91;
    printf("O comprimento em jardas eh: %.2f", jardas);
    return 0;
}