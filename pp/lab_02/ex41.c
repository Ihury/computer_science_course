/*
Faça  um  programa  que  leia  o  valor  da  hora  de  trabalho  (em  reais)  e  numero  de  horas 
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor 
calculado.
*/
#include <stdio.h>

int main(void) {
    float valor_hora, horas_trabalhadas, salario;
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    salario = valor_hora*horas_trabalhadas;
    printf("O salario eh: %.2f", salario+(salario*0.1));
    return 0;
}