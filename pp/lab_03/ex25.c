/*
Calcule as raizes da equaçao de 2º grau. 
Lembrando que: 
x = (−𝑏±√delta)/2𝑎
  
Onde 
delta = 𝑏2 −4𝑎𝑐 
E ax2 + bx + c = 0 representa uma equaçao do 2º grau. 
 
A  variável  a  tem  que  ser  diferente  de  zero.  Caso  seja  igual,  imprima  a  mensagem  “Nao e 
equaçao de segundo grau”. 
 Se delta < 0, nao existe real. Imprima a mensagem “Nao existe raiz”. 
 Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz unica”. 
 Se delta >= 0, imprima as duas raizes reais. 
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0)
    {
        delta = b * b - 4 * a * c;
        if (delta < 0) printf("Nao existe raiz.");
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Raiz unica: %f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raizes reais: %f e %f", x1, x2);
        }
    }
    else printf("Nao e equaçao de segundo grau.");

    return 0;
}