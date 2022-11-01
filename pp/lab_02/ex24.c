/*
Leia  um  valor  de  área  em  metros  quadrados  m2  e  apresente-o  convertido  em  acres.  A 
formula de conversao e: A = M*0.000247, sendo M a área em metros quadrados e A a área em 
acres.
*/
#include <stdio.h>

int main(void) {
    float acres, metros;
    printf("Digite um area em metros quadrados: ");
    scanf("%f", &metros);
    acres = metros*0.000247;
    printf("A area em acres eh: %.2f", acres);
    return 0;
}