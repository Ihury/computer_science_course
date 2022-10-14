/*
Leia  um  valor  de  volume  em  litros  e  apresente-o  convertido  em  metros  cúbicos  m3.  A 
fórmula  de  conversão  é:  M  =  L  /1000,  sendo  L  o  volume  em  litros  e  M  o  volume  em  metros 
cúbicos.
*/
#include <stdio.h>

int main(void) {
    float metros, litros;
    printf("Digite um volume em litros: ");
    scanf("%f", &litros);
    metros = litros/1000;
    printf("O volume em metros cubicos eh: %.2f", metros);
    return 0;
}