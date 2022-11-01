/*
 Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que 
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor 
salário  terao  um  aumento  proporcionalmente  maior  do  que  os  funcionários  com  um  salário 
maior,  e  conforme  o  tempo  de  serviço  na  empresa,  cada  funcionário  irá  receber  um  bônus 
adicional de salário. Faça um programa que leia: 
 o valor do salário atual do funcionário; 
 o tempo de serviço desse funcionário na empresa (numero de anos de trabalho na 
empresa). 
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do 
salário  final  reajustado,  ou  uma  mensagem  caso  o  funcionário  nao  tenha  direito  a  nenhum 
aumento. 
 
Salário Atual       | Reajuste (%) 
Ate 500,00          | 25%          
Ate 1000,00         | 20%          
Ate 1500,00         | 15%          
Ate 2000,00         | 10%          
Acima de 2000,00    | Sem reajuste 

Tempo de Serviço  | Bônus 
Abaixo de 1 ano   | Sem bônus 
De 1 a 3 anos     | 100,00 
De 4 a 6 anos     | 200,00 
De 7 a 10 anos    | 300,00 
Mais de 10 anos   | 500,00
*/
#include <stdio.h>

int main()
{
    float salario, reajuste, bonus;
    int tempo;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempo);

    if (salario <= 500.0) reajuste = 0.25;
    else if (salario <= 1000.0) reajuste = 0.20;
    else if (salario <= 1500.0) reajuste = 0.15;
    else if (salario <= 2000.0) reajuste = 0.10;
    else reajuste = 0.0;
    
    if (tempo < 1) bonus = 0.0;
    else if (tempo <= 3) bonus = 100.0;
    else if (tempo <= 6) bonus = 200.0;
    else if (tempo <= 10) bonus = 300.0;
    else bonus = 500.0;

    printf("O salário reajustado e: %f", salario * (1 + reajuste) + bonus);

    return 0;
}