/*
Faça um programa que leia um numero inteiro positivo de três digitos (de 100 a 999). Gere 
outro numero formado pelos digitos invertidos do numero lido. 
Exemplo: 
  numero_lido = 123 
  numero_gerado = 321 
*/
#include <stdio.h>

int main(void) {
    int numero_lido, numero_gerado;
    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero_lido);
    numero_gerado = (numero_lido%10)*100;
    numero_lido = numero_lido/10;
    numero_gerado = numero_gerado+(numero_lido%10)*10;
    numero_lido = numero_lido/10;
    numero_gerado = numero_gerado+numero_lido;
    printf("O numero gerado eh: %d", numero_gerado);
    return 0;
}