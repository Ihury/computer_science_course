/*
Faça um programa que armazene em um registro de dados (estrutura composta) os dados 
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de 
Nascimento,  Código  do  Setor  onde  trabalha  (0-99),  Cargo  que  ocupa  (string  de  até  30 
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura 
e exibidos na tela.
*/
#include <stdio.h>

struct Data {
  int dia;
  int mes;
  int ano;
};

struct Funcionario {
  char nome[100];
  int idade;
  char sexo;
  char cpf[12];
  struct Data data_nascimento;
  int codigo_setor;
  char cargo[30];
  float salario;
};

void main() {
  struct Funcionario funcionario;

  printf("Digite o nome do funcionário:\n");
  setbuf(stdin, NULL);
  fgets(funcionario.nome, 100, stdin);  

  printf("Digite a idade do funcionário:\n");
  scanf("%d", &funcionario.idade);

  printf("Digite o sexo do funcionário (M/F):\n");
  scanf(" %c", &funcionario.sexo);  

  printf("Digite o CPF do funcionário:\n");
  setbuf(stdin, NULL);
  fgets(funcionario.cpf, 12, stdin);  

  printf("Digite o dia de nascimento do funcionário:\n");
  scanf("%d", &funcionario.data_nascimento.dia);
  printf("Digite o mês de nascimento do funcionário:\n");
  scanf("%d", &funcionario.data_nascimento.mes);
  printf("Digite o ano de nascimento do funcionário:\n");
  scanf("%d", &funcionario.data_nascimento.ano);

  printf("Digite o código do setor do funcionário:\n");
  scanf("%d", &funcionario.codigo_setor);

  printf("Digite o cargo do funcionário:\n");
  setbuf(stdin, NULL);
  fgets(funcionario.cargo, 30, stdin);  

  printf("Digite o salário do funcionário:\n");
  scanf("%f", &funcionario.salario);

  printf("\n\n\n");

  printf("Nome: %s\n", funcionario.nome);
  printf("Idade: %d\n", funcionario.idade);
  printf("Sexo: %c\n", funcionario.sexo);
  printf("CPF: %s\n", funcionario.cpf);
  printf("Data de nascimento: %d/%d/%d\n", funcionario.data_nascimento.dia, funcionario.data_nascimento.mes, funcionario.data_nascimento.ano);
  printf("Código do setor: %d\n", funcionario.codigo_setor);
  printf("Cargo: %s\n", funcionario.cargo);
  printf("Salário: %.2f\n", funcionario.salario);  
}