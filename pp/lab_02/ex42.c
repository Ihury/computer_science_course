/*
Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se 
que esse funcionário tem uma gratificaçao de 5% sobre o salário-base. Alem disso, ele paga 7% 
de imposto sobre o salário-base.
*/
#include <stdio.h>

int main(void) {
    float salario_base, salario, gratificacao, imposto;
    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salario_base);
    gratificacao = salario_base*0.05;
    imposto = salario_base*0.07;
    salario = salario_base+gratificacao-imposto;
    printf("O salario a receber eh: %.2f", salario);
    return 0;
}