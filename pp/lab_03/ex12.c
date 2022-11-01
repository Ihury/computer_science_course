/*
Ler  um  numero  inteiro.  Se  o  numero  lido  for  negativo,  escreva  a  mensagem  “Numero 
inválido”. Se o numero for positivo, calcular o logaritmo deste numero. 
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) printf("O logaritmo do numero e: %f", log10(num));    
    else printf("O numero e inválido.");

    return 0;
}