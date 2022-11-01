/*
Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrário, imprima 
o numero ao quadrado
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0) printf("A raiz quadrada do numero e: %f", sqrt(num));
    else printf("O numero ao quadrado e: %f", num * num);

    return 0;
}