/*
Faça um programa que calcule e mostre a área de um trapezio. Sabe-se que: 
𝐴=((basemaior + basemenor) ∗ altura)/2  
Lembre-se a base maior e a base menor devem ser numeros maiores que zero.
*/
#include <stdio.h>

int main()
{
    float base_maior, base_menor, altura, area;

    printf("Digite a base maior: ");
    scanf("%f", &base_maior);

    printf("Digite a base menor: ");
    scanf("%f", &base_menor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (base_maior > 0 && base_menor > 0) {
        area = ((base_maior + base_menor) * altura) / 2;
        printf("A área do trapezio e: %f", area);
    } else {
        printf("As bases devem ser maiores que zero.");
    }

    return 0;
}