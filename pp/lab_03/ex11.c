/*
 Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a 
soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponderá o valor 8 (2 + 5 
+  1).  Se  o  numero  lido  nao  for  maior  do  que  zero,  o  programa  terminará  com  a  mensagem: 
“Numero inválido”
*/
#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num > 0)
        {
            soma += num % 10;
            num /= 10;
        }
        printf("A soma dos algarismos e: %d", soma);
    }
    else printf("Numero inválido.");

    return 0;
}