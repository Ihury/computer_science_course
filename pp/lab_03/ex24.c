/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui 
uma  taxa  diferente  de  imposto  sobre  o  produto  (MG  7%;  SP  12%;  RJ  15%;  MS  8%).  Faça  um 
programa  em  que  o  usuário  entre  com  o  valor  e  o  estado  destino  do  produto  e  o  programa 
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o 
estado digitado nao for válido, mostrar uma mensagem de erro.
*/
#include <stdio.h>

int main()
{
    float valor, imposto;
    char estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino do produto (MG, SP, RJ ou MS): ");
    scanf(" %c", &estado);

    switch (estado)
    {
        case 'MG':
            imposto = 0.07;
            break;
        case 'SP':
            imposto = 0.12;
            break;
        case 'RJ':
            imposto = 0.15;
            break;
        case 'MS':
            imposto = 0.08;
            break;
        default:
            printf("Estado inválido.");
            return 0;
    }

    printf("O valor final do produto e: %f", valor * (1 + imposto));

    return 0;
}