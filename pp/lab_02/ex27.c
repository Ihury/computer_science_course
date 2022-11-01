/*
Leia  um valor  de  área em  hectares  e  apresente-o  convertido  em metros  quadrados m2.  A 
formula  de  conversao  e:  M  =  H*10000,  sendo  M  a área em metros  quadrados  e  H  a  área  em 
hectares.
*/
#include <stdio.h>

int main(void) {
    float hectares, metros;
    printf("Digite um area em hectares: ");
    scanf("%f", &hectares);
    metros = hectares*10000;
    printf("A area em metros quadrados eh: %.2f", metros);
    return 0;
}