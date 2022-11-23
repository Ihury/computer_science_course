/*
Faça  uma  função  que  receba  a  distância  em  Km  e  a  quantidade  de  litros  de  gasolina 
consumidos  por  um  carro  em  um  percurso,  calcule  o  consumo  em  Km/l  e  escreva  uma 
mensagem de acordo com a tabela abaixo:  
CONSUMO     | (Km/l) | MENSAGEM 
menor que   | 8      | Venda o carro! 
entre       | 8 e 14 | Econômico! 
maior que   | 14     | Super econômico! 
*/
#include <stdio.h>

void calculateConsumption(float distance, float liters);

void main()
{
    float distance, liters;

    scanf("%f %f", &distance, &liters);
    calculateConsumption(distance, liters);
}

void calculateConsumption(float distance, float liters)
{
    float consumption = distance / liters;

    if (consumption < 8)
    {
        printf("Venda o carro!\n");
    }
    else if (consumption >= 8 && consumption <= 14)
    {
        printf("Econômico!\n");
    }
    else
    {
        printf("Super econômico!\n");
    }
}