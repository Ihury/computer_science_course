/*
Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre: 
 O numero digitado ao quadrado 
 A raiz quadrada do numero digitado
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("O numero digitado ao quadrado e: %d\n", num * num);
        printf("A raiz quadrada do numero digitado e: %f", sqrt(num));
    }

    return 0;
}