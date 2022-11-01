/*
Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em funçao do preço novo (de acordo com a
segunda tabela).

PREÇO ANTIGO            | PERCENTUAL DE AUMENTO
ate R$ 50               | 5%
entre R$ 50 e R$ 100    | 10%
acima de R$ 100         | 15%

PREÇO                               | NOVO MENSAGEM 
ate R$ 80                           | Barato 
entre R$ 80 e R$ 120 (inclusive)    | Normal 
entre R$ 120 e R$ 200 (inclusive)   | Caro 
acima de R$ 200                     | Muito caro
*/
#include <stdio.h>

int main()
{
    float preco_antigo, preco_novo, percentual;

    printf("Digite o preço antigo do produto: ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50) percentual = 0.05;
    else if (preco_antigo <= 100) percentual = 0.1;
    else percentual = 0.15;

    preco_novo = preco_antigo * (1 + percentual);

    printf("O preço novo do produto e: %f\n", preco_novo);

    if (preco_novo <= 80) printf("Barato");
    else if (preco_novo <= 120) printf("Normal");
    else if (preco_novo <= 200) printf("Caro");
    else printf("Muito caro");

    return 0;
}