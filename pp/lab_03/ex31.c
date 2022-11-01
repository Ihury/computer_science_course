/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a 
seguir, verifique e mostra qual a classificaçao dessa pessoa. 
       
Altura          | Peso 
                | Ate 60    | Entre 60 e 90 (Inclusive) | Acima de 90 
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
        if (peso <= 60) printf("Classificaçao: A");
        else if (peso <= 90) printf("Classificaçao: D");
        else printf("Classificaçao: G");
    } else if (altura <= 1.70) {
        if (peso <= 60) printf("Classificaçao: B");
        else if (peso <= 90) printf("Classificaçao: E");
        else printf("Classificaçao: H");
    } else {
        if (peso <= 60) printf("Classificaçao: C");
        else if (peso <= 90) printf("Classificaçao: F");
        else printf("Classificaçao: I");
    }

    return 0;
}