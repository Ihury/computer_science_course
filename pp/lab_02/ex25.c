/*
Leia  um  valor  de  área  em  acres  e  apresente-o  convertido  em  metros  quadrados  m2.  A 
formula de conversao e: M = A*4048.58, sendo M a área em metros quadrados e A a área em 
acres.
*/
#include <stdio.h>

int main(void) {
    float acres, metros;
    printf("Digite um area em acres: ");
    scanf("%f", &acres);
    metros = acres*4048.58;
    printf("A area em metros quadrados eh: %.2f", metros);
    return 0;
}