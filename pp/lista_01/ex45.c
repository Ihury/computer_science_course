/*
Faça  um  programa  para  converter  uma  letra  maiúscula  em  letra  minúscula.  Use  a  tabela 
ASCII para resolver o problema. 
*/
#include <stdio.h>

int main(void) {
    char letra;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);
    printf("A letra minuscula eh: %c", letra+32);
    return 0;
}