/*
Um  funcionário  recebe  aumento  anual.  Em  1995  foi  contratado  por  2000  reais.  Em  1996 
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do 
ano anterior. Faça programa que determine o salário atual do funcionário.
*/
#include <stdio.h>

int main(void) {
    int year = 1995;
    float salary = 2000;
    while (year < 2019) {
        if (year == 1995) {
            printf("Salário de %d: R$%.2f\n", year, salary);
        } else {
            salary *= 1.015;
            printf("Salário de %d: R$%.2f\n", year, salary);
        }
        year++;
    }
    return 0;
}