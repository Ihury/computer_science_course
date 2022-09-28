#include <stdio.h>
#include <math.h>

float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
float elevar(float a, float b);
float resolver_radical(float a, float b);

int main() {
    int opcao;
    float resposta, numeroA, numeroB;
    char opcoes[6][20] = {
        "Somar",
        "Subtrair",
        "Multiplicar",
        "Dividir",
        "Elevar",
        "Resolver radical"
    };

    printf("\nInforme qual das funcoes abaixo voce deseja executar:\n\n");
        
    for (int i = 0; i < 6; i++) {
        printf("%d - %s\n", i + 1, opcoes[i]);
    }

    printf("\nDigite o numero referente a opcao escolhida:\n");

    scanf("%d", &opcao);        

    switch (opcao) {
        case 1:            
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numeroA);

            printf("Digite o segundo numero:\n");
            scanf("%f", &numeroB);

            printf("\nSomando...\n");

            resposta = somar(numeroA, numeroB);
            break;

        case 2:
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numeroA);

            printf("Digite o segundo numero:\n");
            scanf("%f", &numeroB);

            printf("\\nSubtraindo...\n");

            resposta = subtrair(numeroA, numeroB);
            break;

        case 3:            
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numeroA);

            printf("Digite o segundo numero:\n");
            scanf("%f", &numeroB);

            printf("\nMultiplicando...\n");

            resposta = multiplicar(numeroA, numeroB);
            break;

        case 4:            
            printf("Digite o dividendo:\n");
            scanf("%f", &numeroA);

            printf("Digite o divisor:\n");
            scanf("%f", &numeroB);

            printf("\nDividindo...\n");

            resposta = dividir(numeroA, numeroB);
            break;

        case 5:            
            printf("Digite a base:\n");
            scanf("%f", &numeroA);

            printf("Digite o expoente:\n");
            scanf("%f", &numeroB);

            printf("\nElevando...\n");

            resposta = elevar(numeroA, numeroB);
            break;

        case 6:            
            printf("Digite o radicando:\n");
            scanf("%f", &numeroA);

            printf("Digite o indice:\n");
            scanf("%f", &numeroB);

            printf("\nResolvendo radical...\n");

            resposta = resolver_radical(numeroA, numeroB);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    printf("Resposta: %.2lf\n\n", resposta);    

    return 0;
};

float somar(float a, float b) {
    return a + b;
};

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
};

float dividir(float a, float b) {
    return a / b;
};

float elevar(float a, float b) {
    return pow(a, b);
};

float resolver_radical(float radicando, float indice) {
    indice = indice ? indice : 2;
    return pow(radicando, 1.0 / indice);
};