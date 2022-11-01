/*
A nota final de um estudante e calculada a partir de três notas atribuidas entre o intervalo 
de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliaçao semestral e a um 
exame final. A media das três notas mencionadas anteriormente obedece aos pesos: Trabalho 
de Laboratorio: 2; Avaliaçao Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na 
tela se o aluno está reprovado (media entre 0 e 2,9), de  recuperaçao (entre 3 e 4,9) ou se foi 
aprovado. Faça todas as verificações necessárias.
*/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &nota1);

    printf("Digite a nota da avaliaçao semestral: ");
    scanf("%f", &nota2);

    printf("Digite a nota do exame final: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    if (media >= 0 && media <= 2.9) printf("A media das notas e: %f. O aluno foi reprovado.", media);
    else if (media >= 3 && media <= 4.9) printf("A media das notas e: %f. O aluno está de recuperaçao.", media);
    else if (media >= 5 && media <= 10) printf("A media das notas e: %f. O aluno foi aprovado.", media);
    else printf("Uma das notas nao e válida.");

    return 0;
}