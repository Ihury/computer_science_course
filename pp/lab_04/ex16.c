/*
Faça  um  programa  que  apresente  um  menu  de  opções  para  o  cálculo  das  seguintes 
operações entre dois números: 
 Adição (opção 1) 
 Subtração (opção 2) 
 Multiplicação (opção 3) 
 Divisão (opção 4). 
 Saída (opção 5) 
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado 
e  a  volta  ao  menu  de  opções. O  programa  só termina  quando  for escolhida  a  opção  de  saída 
(opção 5). 
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    int opcao = 0;
    while (opcao != 5) {
        printf("Escolha uma opção:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        if (opcao == 5) {
            break;
        }
        int a, b;
        printf("Digite dois valores: ");
        scanf("%d %d", &a, &b);
        if (opcao == 1) {
            printf("%d + %d = %d\n", a, b, a + b);
        } else if (opcao == 2) {
            printf("%d - %d = %d\n", a, b, a - b);
        } else if (opcao == 3) {
            printf("%d * %d = %d\n", a, b, a * b);
        } else if (opcao == 4) {
            printf("%d / %d = %d\n", a, b, a / b);
        } else {
            printf("Opção inválida!\n");
        }
    }
}