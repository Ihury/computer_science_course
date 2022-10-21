/*
Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for 
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima: 
“Empréstimo concedido”
*/
#include <stdio.h>

int main()
{
    float salario, prestacao;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2) printf("Empréstimo não concedido.");
    else printf("Empréstimo concedido.");

    return 0;
}