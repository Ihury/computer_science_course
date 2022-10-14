/*
Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele 
recebeu um aumento de 25%. 
*/
#include <stdio.h>

int main(void) {
    float salario, aumento;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    aumento = salario*0.25;
    printf("O novo salario eh: %.2f", salario+aumento);
    return 0;
}