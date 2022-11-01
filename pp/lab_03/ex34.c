/*
Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo com a tabela 
abaixo, quando o aluno tem mais de 20 faltas ocorre uma reduçao de conceito.

NOTA            | CONCEITO (ATe 20 FAL |TAS)    | CONCEITO (MAIS DE 20 FALTAS) 
9.0 ate 10.0    | A                             | B 
7.5 ate 8.9     | B                             | C 
5.0 ate 7.4     | C                             | D 
4.0 ate 4.9     | D                             | E 
0.0 ate 3.9     | E                             | E 
*/
#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0) conceito = 'A';
    else if (nota >= 7.5) conceito = 'B';
    else if (nota >= 5.0) conceito = 'C';
    else if (nota >= 4.0) conceito = 'D';
    else conceito = 'E';

    if (faltas > 20) conceito++;

    printf("Conceito: %c", conceito);

    return 0;
}