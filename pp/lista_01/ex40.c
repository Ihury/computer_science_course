/*
Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo-se que são descontados 8% para imposto de renda.
*/
#include <stdio.h>

int main(void) {
    int dias;
    float salario, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salario = dias*30;
    liquido = salario - (salario*0.08);

    printf("O salario liquido eh: %.2f", liquido);
    return 0;
}