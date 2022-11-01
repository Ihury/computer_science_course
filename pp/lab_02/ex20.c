/*
Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula de 
conversao e: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>

int main(void) {
    float libras, quilogramas;
    printf("Digite uma massa em quilogramas: ");
    scanf("%f", &quilogramas);
    libras = quilogramas/0.45;
    printf("A massa em libras eh: %.2f", libras);
    return 0;
}