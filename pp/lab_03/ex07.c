/*
Faça um programa que receba dois numeros e mostre o maior. Se por acaso, os dois numeros 
forem iguais, imprima a mensagem: “Numeros iguais”
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) printf("O primeiro numero e maior.");
    else if (num1 < num2) printf("O segundo numero e maior.");
    else printf("Os numeros sao iguais.");

    return 0;
}