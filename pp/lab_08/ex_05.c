/*
Considerando a estrutura  
struct vetor { 
 float a; 
 float b; 
 float c; 
};  
para  representar  um  vetor  no  R3,  implemente  um  programa  que  calcule  a  soma  de  dois 
vetores.
*/
#include <stdio.h>

struct Vetor {
    float a;
    float b;
    float c;
};

int main()
{
    struct Vetor vetor1, vetor2, vetor3;

    printf("Digite o valor de a do primeiro vetor: ");
    scanf("%f", &vetor1.a);
    printf("Digite o valor de b do primeiro vetor: ");
    scanf("%f", &vetor1.b);
    printf("Digite o valor de c do primeiro vetor: ");
    scanf("%f", &vetor1.c);
    printf("Digite o valor de a do segundo vetor: ");
    scanf("%f", &vetor2.a);
    printf("Digite o valor de b do segundo vetor: ");
    scanf("%f", &vetor2.b);
    printf("Digite o valor de c do segundo vetor: ");
    scanf("%f", &vetor2.c);

    vetor3.a = vetor1.a + vetor2.a;
    vetor3.b = vetor1.b + vetor2.b;
    vetor3.c = vetor1.c + vetor2.c;
    
    printf("Vetor 1: (%.2f, %.2f, %.2f)\n", vetor1.a, vetor1.b, vetor1.c);
    printf("Vetor 2: (%.2f, %.2f, %.2f)\n", vetor2.a, vetor2.b, vetor2.c);
    printf("Vetor 3: (%.2f, %.2f, %.2f)\n", vetor3.a, vetor3.b, vetor3.c);

    return 0;
}