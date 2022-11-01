/*
 Determine  se  um  determinado  ano  lido  e  bissexto.  Sendo  que  um  ano  e  bissexto  se  for 
divisivel por 400 ou se for divisivel por 4 e nao for divisivel por 100. Por exemplo: 1988, 1992, 
1996.
*/
#include <stdio.h>

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) printf("O ano e bissexto.");
    else printf("O ano nao e bissexto.");

    return 0;
}