/*
Faça um programa que leia 2 notas de um aluno, verifique se as notas sao válidas e exiba na 
tela  a  media  destas  notas.  Uma  nota  válida  deve  ser,  obrigatoriamente,  um  valor  entre  0.0  e 
10.0, onde caso a nota nao possua um valor válido, este fato deve ser informado ao usuário e o 
programa termina. 
*/
#include <stdio.h>

int main()
{
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) printf("A media das notas e: %f", (nota1 + nota2) / 2);
    else printf("Uma das notas nao e válida.");

    return 0;
}