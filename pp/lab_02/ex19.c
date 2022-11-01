/*
Leia  um  valor  de  volume  em  litros  e  apresente-o  convertido  em  metros  cubicos  m3.  A 
formula  de  conversao  e:  M  =  L  /1000,  sendo  L  o  volume  em  litros  e  M  o  volume  em  metros 
cubicos.
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