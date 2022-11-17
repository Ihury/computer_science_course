/*
Faça  um  programa  que  leia  um  conjunto  não  determinado  de  valores,  um  de  cada  vez, e 
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada 
de dados com um valor negativo ou zero.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    int value;
    printf("Digite um valor: ");
    scanf("%d", &value);
    while (value > 0) {
        printf("O quadrado de %d é %d\n", value, value * value);
        printf("O cubo de %d é %d\n", value, value * value * value);
        printf("A raiz quadrada de %d é %f\n", value, sqrt(value));
        printf("Digite um valor: ");
        scanf("%d", &value);
    }
    return 0;
}