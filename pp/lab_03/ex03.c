/*
Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima 
o número ao quadrado
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num >= 0) printf("A raiz quadrada do número é: %f", sqrt(num));
    else printf("O número ao quadrado é: %f", num * num);

    return 0;
}