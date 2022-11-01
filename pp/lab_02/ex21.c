/*
Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula de 
conversao e: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>

int main(void) {
    float libras, quilogramas;
    printf("Digite uma massa em libras: ");
    scanf("%f", &libras);
    quilogramas = libras*0.45;
    printf("A massa em quilogramas eh: %.2f", quilogramas);
    return 0;
}