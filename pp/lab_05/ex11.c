/*
Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a 
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá 
calcular a média ponderada, com pesos 5, 3 e 2. 
*/
#include <stdio.h>

float calculateAverage(float grade1, float grade2, float grade3, char type);

void main()
{
    float grade1, grade2, grade3;
    char type;

    scanf("%f %f %f %c", &grade1, &grade2, &grade3, &type);
    printf("%.2f\n", calculateAverage(grade1, grade2, grade3, type));
}

float calculateAverage(float grade1, float grade2, float grade3, char type)
{
    if (type == 'A')
    {
        return (grade1 + grade2 + grade3) / 3.0;
    }
    else if (type == 'P')
    {
        return (grade1 * 5.0 + grade2 * 3.0 + grade3 * 2.0) / 10.0;
    }
    else
    {
        return 0.0;
    }
}