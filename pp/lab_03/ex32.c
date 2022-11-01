/*
Escrever  um  programa  que  leia  o  codigo  do  produto  escolhido  do  cardápio  de  uma 
lanchonete  e  a  quantidade.  O  programa  deve  calcular  o  valor  a  ser  pago  por  aquele  lanche. 
Considere que a cada execuçao somente será calculado um pedido. O cardápio da lanchonete 
segue o padrao abaixo: 
 
Especificaçao   | Codigo    | Preço 
Cachorro Quente | 100       | 1,20 
Bauru Simples   | 101       | 1,30 
Bauru com Ovo   | 102       | 1,50 
Hamburguer      | 103       | 1,20 
Cheeseburguer   | 104       | 1,70 
Suco            | 105       | 2,20 
Refrigerante    | 106       | 1,00
*/
#include <stdio.h>

int main()
{
    int codigo;
    float quantidade, preco;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%f", &quantidade);

    switch (codigo)
    {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Codigo inválido.");
            return 0;
    }

    printf("O valor a ser pago e: %f", quantidade * preco);

    return 0;
}