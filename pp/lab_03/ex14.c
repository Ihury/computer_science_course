/*
A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo 
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um 
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho 
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na 
tela se o aluno está reprovado (média entre 0 e 2,9), de  recuperação (entre 3 e 4,9) ou se foi 
aprovado. Faça todas as verificações necessárias.
*/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &nota1);

    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &nota2);

    printf("Digite a nota do exame final: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    if (media >= 0 && media <= 2.9) printf("A média das notas é: %f. O aluno foi reprovado.", media);
    else if (media >= 3 && media <= 4.9) printf("A média das notas é: %f. O aluno está de recuperação.", media);
    else if (media >= 5 && media <= 10) printf("A média das notas é: %f. O aluno foi aprovado.", media);
    else printf("Uma das notas não é válida.");

    return 0;
}