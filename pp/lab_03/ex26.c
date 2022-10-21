/*
Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um 
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo: 
CONSUMO (Km/l) MENSAGEM 
- menor que 8 Venda o carro! 
- entre 8 e 14 Econômico! 
- maior que 14 Super econômico!
*/
#include <stdio.h>

int main()
{
    float distancia, litros, consumo;

    printf("Digite a distância percorrida (em Km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if (consumo < 8) printf("Venda o carro!");
    else if (consumo <= 14) printf("Econômico!");
    else printf("Super econômico!");

    return 0;
}