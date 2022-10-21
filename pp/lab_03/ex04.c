/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: 
 O número digitado ao quadrado 
 A raiz quadrada do número digitado
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("O número digitado ao quadrado é: %d\n", num * num);
        printf("A raiz quadrada do número digitado é: %f", sqrt(num));
    }

    return 0;
}