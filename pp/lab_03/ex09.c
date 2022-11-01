/*
Leia o salário de um trabalhador e o valor da prestaçao de um emprestimo. Se a prestaçao for 
maior que 20% do salário imprima: “Emprestimo nao concedido”, caso contrário imprima: 
“Emprestimo concedido”
*/
#include <stdio.h>

int main()
{
    float salario, prestacao;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestaçao: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2) printf("Emprestimo nao concedido.");
    else printf("Emprestimo concedido.");

    return 0;
}