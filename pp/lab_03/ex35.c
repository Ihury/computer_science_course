/*
Leia uma data e determine se ela e válida. Ou seja, verifique se o mês está entre 1 e 12, e 
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em 
anos nao bissextos.
*/
#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido.");
    } else if (dia < 1 || dia > 31) {
        printf("Dia inválido.");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("Dia inválido.");
        } else {
            printf("Data válida.");
        }
    } else if (mes == 2) {
        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
            if (dia > 29) {
                printf("Dia inválido.");
            } else {
                printf("Data válida.");
            }
        } else {
            if (dia > 28) {
                printf("Dia inválido.");
            } else {
                printf("Data válida.");
            }
        }
    } else {
        printf("Data válida.");
    }

    return 0;
}