/*
Ler  um  número  inteiro.  Se  o  número  lido  for  negativo,  escreva  a  mensagem  “Número 
inválido”. Se o número for positivo, calcular o logaritmo deste número. 
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 0) printf("O logaritmo do número é: %f", log10(num));    
    else printf("O número é inválido.");

    return 0;
}