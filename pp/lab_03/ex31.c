/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a 
seguir, verifique e mostra qual a classificação dessa pessoa. 
       
Altura          | Peso 
                | Até 60    | Entre 60 e 90 (Inclusive) | Acima de 90 
Menor que 1,20  |     A     |            D              |        G 
De 1,20 a 1,70  |     B     |            E              |        H 
Maior que 1,70  |     C     |            F              |        I
*/
#include <stdio.h>

int main()
{
    float altura, peso;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60) printf("Classificação: A");
        else if (peso <= 90) printf("Classificação: D");
        else printf("Classificação: G");
    } else if (altura <= 1.70) {
        if (peso <= 60) printf("Classificação: B");
        else if (peso <= 90) printf("Classificação: E");
        else printf("Classificação: H");
    } else {
        if (peso <= 60) printf("Classificação: C");
        else if (peso <= 90) printf("Classificação: F");
        else printf("Classificação: I");
    }

    return 0;
}