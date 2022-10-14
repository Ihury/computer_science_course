/*
Leia  um  valor  de  volume  em  metros  cúbicos  m3  e  apresente-o  convertido  em  litros.  A 
fórmula  de  conversão  é:  L  =  1000*M,  sendo  L  o  volume  em  litros  e  M  o  volume  em  metros 
cúbicos.
*/
#include <stdio.h>

int main(void) {
    float metros, litros;
    printf("Digite um volume em metros cubicos: ");
    scanf("%f", &metros);
    litros = 1000*metros;
    printf("O volume em litros eh: %.2f", litros);
    return 0;
}