/*
Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o 
resultado de xz para o programa principal. Atenção não utilize nenhuma função pronta de 
exponenciação.
*/
#include <stdio.h>

int power(int x, int z);

void main()
{
    int x, z;

    scanf("%d %d", &x, &z);
    printf("%d\n", power(x, z));
}

int power(int x, int z)
{
    int result = 1;

    for (int i = 0; i < z; i++)
        result *= x;

    return result;
}