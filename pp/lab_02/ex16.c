/*
Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A 
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento 
em polegadas.
*/
#include <stdio.h>

int main(void) {
    float centimetros, polegadas;
    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &polegadas);
    centimetros = polegadas*2.54;
    printf("O comprimento em centimetros eh: %.2f", centimetros);
    return 0;
}