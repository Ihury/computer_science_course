/*
 Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com os tipos 
básicos necessários e implementar o que se pede.  
O Cadastro é composto de: 
Nome Endereço Salário 
Identidade CPF Estado Civil 
Telefone Idade Sexo 
 
O Endereço é composto de: 
Rua Bairro Cidade 
Estado CEP  
 
a) Crie um vetor Cadastro com 5 elementos; 
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros; 
c) Encontre a pessoa com maior idade entre os cadastrados; 
d) Encontre as pessoas do sexo masculino; 
e) Encontre as pessoas com sal  ́ ario maior que 1000; 
f) Imprima  os  dados  da  pessoa  cuja  identidade  seja  igual  a  um  valor  fornecido  pelo 
usuário. 
*/
#include <stdio.h>

struct Endereco
{
  char rua[100];
  char bairro[100];
  char cidade[100];
  char estado[100];
  char cep[100];
};

struct Cadastro
{
  char nome[100];
  struct Endereco endereco;
  float salario;
  char identidade[100];
  char cpf[100];
  char estadoCivil[100];
  char telefone[100];
  int idade;
  char sexo[100];
};

int main()
{
  struct Cadastro cadastros[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].nome);
    printf("Digite a rua do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].endereco.rua);
    printf("Digite o bairro do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].endereco.bairro);
    printf("Digite a cidade do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].endereco.cidade);
    printf("Digite o estado do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].endereco.estado);
    printf("Digite o cep do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].endereco.cep);
    printf("Digite o salario do cadastro %d: ", i + 1);
    scanf("%f", &cadastros[i].salario);
    printf("Digite a identidade do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].identidade);
    printf("Digite o cpf do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].cpf);
    printf("Digite o estado civil do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].estadoCivil);
    printf("Digite o telefone do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].telefone);
    printf("Digite a idade do cadastro %d: ", i + 1);
    scanf("%d", &cadastros[i].idade);
    printf("Digite o sexo do cadastro %d: ", i + 1);
    scanf("%s", cadastros[i].sexo);
    printf("\n");
  }

  int maiorIdade = 0, indiceMaiorIdade = 0;
  for (int i = 0; i < 5; i++)
  {
    if (cadastros[i].idade > maiorIdade)
    {
      maiorIdade = cadastros[i].idade;
      indiceMaiorIdade = i;
    }
  }
  printf("Pessoa com maior idade: %s\n", cadastros[indiceMaiorIdade].nome);

  printf("Pessoas do sexo masculino: ");
  for (int i = 0; i < 5; i++)
  {
    if (cadastros[i].sexo[0] == 'm')
    {
      printf("%s ", cadastros[i].nome);
    }
  }

  printf("\nPessoas com salario maior que 1000: ");
  for (int i = 0; i < 5; i++)
  {
    if (cadastros[i].salario > 1000)
    {
      printf("%s ", cadastros[i].nome);
    }
  }

  char identidade[100];

  printf("\nDigite a identidade da pessoa que deseja encontrar: ");
  setbuf(stdin, NULL);
  fgets(identidade, 100, stdin);

  for (int i = 0; i < 5; i++)
  {
    if (strcmp(cadastros[i].identidade, identidade) == 0)
    {
      printf("Nome: %s", cadastros[i].nome);
      printf("Rua: %s", cadastros[i].endereco.rua);
      printf("Bairro: %s", cadastros[i].endereco.bairro);
      printf("Cidade: %s", cadastros[i].endereco.cidade);
      printf("Estado: %s", cadastros[i].endereco.estado);
      printf("Cep: %s", cadastros[i].endereco.cep);
      printf("Salario: %f", cadastros[i].salario);
      printf("Identidade: %s", cadastros[i].identidade);
      printf("Cpf: %s", cadastros[i].cpf);
      printf("Estado civil: %s", cadastros[i].estadoCivil);
      printf("Telefone: %s", cadastros[i].telefone);
      printf("Idade: %d", cadastros[i].idade);
      printf("Sexo: %s", cadastros[i].sexo);
    }
  }

  return 0;
}