/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso 
ideal, utilizando as seguintes formulas (onde h corresponde à altura): 
 Homens: (72,7 * h) – 58,0 
 Mulheres: (62,1 * h) – 44,7
*/
#include <stdio.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M') pesoIdeal = (72.7 * altura) - 58.0;
    else if (sexo == 'F') pesoIdeal = (62.1 * altura) - 44.7;
    else {
        printf("Sexo inválido.");
        return 0;
    }

    printf("O peso ideal e: %f", pesoIdeal);

    return 0;
}