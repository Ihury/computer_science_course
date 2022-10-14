/*
A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo 
que da quantia total: 
  - O primeiro ganhador receberá 46%; 
  - O segundo receberá 32%; 
  - O terceiro receberá o restante; 
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
#include <stdio.h>

int main(void) {
    float premio, primeiro, segundo, terceiro;

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    primeiro = premio*0.46;
    segundo = premio*0.32;
    terceiro = premio - primeiro - segundo;
    
    printf("O primeiro ganhador recebeu: %.2f", primeiro);
    printf("O segundo ganhador recebeu: %.2f", segundo);
    printf("O terceiro ganhador recebeu: %.2f", terceiro);
    return 0;
}