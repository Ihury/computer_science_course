/*
Leia um valor de comprimento em centimetros e apresente-o convertido em polegadas. A 
formula de conversao e: P = C/2.54, sendo C o comprimento em centimetros e P o comprimento 
em polegadas.
*/
#include <stdio.h>

int main(void) {
    float centimetros, polegadas;
    printf("Digite um comprimento em centimetros: ");
    scanf("%f", &centimetros);
    polegadas = centimetros/2.54;
    printf("O comprimento em polegadas eh: %.2f", polegadas);
    return 0;
}