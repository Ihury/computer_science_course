/*
 Leia uma data de nascimento de uma pessoa fornecida atraves de três numeros inteiros: Dia, 
Mês  e  Ano.  Teste  a  validade  desta  data  para  saber  se  está  e  uma  data  válida.  Teste  se  o  dia 
fornecido e um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto), 
dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do 
mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida 
com  o  valor  igual a 2022). Imprimir: “data válida”  ou “data inválida” no final da execuçao  do 
programa.
*/
#include <stdio.h>

const int ANO_ATUAL = 2022;

int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano > ANO_ATUAL) {
        printf("Ano inválido.");    
    } else if (mes < 1 || mes > 12) {
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