/*
Leia  um valor  de  área em  metros  quadrados  m2 e  apresente-o  convertido em  hectares.  A 
formula de conversao e: H = M*0.0001, sendo M a área em metros quadrados e H a área em 
hectares.
*/
#include <stdio.h>

int main(void) {
    float hectares, metros;
    printf("Digite um area em metros quadrados: ");
    scanf("%f", &metros);
    hectares = metros*0.0001;
    printf("A area em hectares eh: %.2f", hectares);
    return 0;
}