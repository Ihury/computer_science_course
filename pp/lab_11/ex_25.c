#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact
{
  char name[100];
  char phone[100];
  int day;
  int month;
};

struct contact *contacts = NULL;
int contacts_count = 0;

void add_contact()
{
  contacts_count++;
  contacts = realloc(contacts, contacts_count * sizeof(struct contact));
  printf("Informe o nome do contato: ");
  scanf("%s", contacts[contacts_count - 1].name);
  printf("Informe o telefone do contato: ");
  scanf("%s", contacts[contacts_count - 1].phone);
  printf("Informe o dia do aniversario do contato: ");
  scanf("%d", &contacts[contacts_count - 1].day);
  printf("Informe o mes do aniversario do contato: ");
  scanf("%d", &contacts[contacts_count - 1].month);
}

void remove_contact()
{
  char name[100];
  printf("Informe o nome do contato a ser removido: ");
  scanf("%s", name);
  for (int i = 0; i < contacts_count; i++)
  {
    if (strcmp(contacts[i].name, name) == 0)
    {
      for (int j = i; j < contacts_count - 1; j++)
      {
        contacts[j] = contacts[j + 1];
      }
      contacts_count--;
      contacts = realloc(contacts, contacts_count * sizeof(struct contact));
      printf("Contato removido com sucesso!\n");
      return;
    }
  }
  printf("Contato nao encontrado!\n");
}

void search_contact()
{
  char name[100];
  printf("Informe o nome do contato a ser pesquisado: ");
  scanf("%s", name);
  for (int i = 0; i < contacts_count; i++)
  {
    if (strcmp(contacts[i].name, name) == 0)
    {
      printf("Nome: %s\n", contacts[i].name);
      printf("Telefone: %s\n", contacts[i].phone);
      printf("Aniversario: %d/%d\n", contacts[i].day, contacts[i].month);
      return;
    }
  }
  printf("Contato nao encontrado!\n");
}

void list_contacts()
{
  for (int i = 0; i < contacts_count; i++)
  {
    printf("Nome: %s\n", contacts[i].name);
    printf("Telefone: %s\n", contacts[i].phone);
    printf("Aniversario: %d/%d\n", contacts[i].day, contacts[i].month);
  }
}

void list_contacts_by_letter()
{
  char letter;
  printf("Informe a letra: ");
  scanf(" %c", &letter);
  for (int i = 0; i < contacts_count; i++)
  {
    if (contacts[i].name[0] == letter)
    {
      printf("Nome: %s\n", contacts[i].name);
      printf("Telefone: %s\n", contacts[i].phone);
      printf("Aniversario: %d/%d\n", contacts[i].day, contacts[i].month);
    }
  }
}

void list_contacts_by_month()
{
  int month;
  printf("Informe o mes: ");
  scanf("%d", &month);
  for (int i = 0; i < contacts_count; i++)
  {
    if (contacts[i].month == month)
    {
      printf("Nome: %s\n", contacts[i].name);
      printf("Telefone: %s\n", contacts[i].phone);
      printf("Aniversario: %d/%d\n", contacts[i].day, contacts[i].month);
    }
  }
}

void save_contacts()
{
  FILE *file = fopen("contacts.bin", "wb");
  fwrite(&contacts_count, sizeof(int), 1, file);
  fwrite(contacts, sizeof(struct contact), contacts_count, file);
  fclose(file);
}

void load_contacts()
{
  FILE *file = fopen("contacts.bin", "rb");
  if (file == NULL)
  {
    return;
  }
  fread(&contacts_count, sizeof(int), 1, file);
  contacts = malloc(contacts_count * sizeof(struct contact));
  fread(contacts, sizeof(struct contact), contacts_count, file);
  fclose(file);
}

int main()
{
  load_contacts();
  int option;
  do
  {
    printf("1 - Inserir contato\n");
    printf("2 - Remover contato\n");
    printf("3 - Pesquisar contato\n");
    printf("4 - Listar todos os contatos\n");
    printf("5 - Listar contatos por letra\n");
    printf("6 - Listar aniversariantes do mes\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
      add_contact();
      break;
    case 2:
      remove_contact();
      break;
    case 3:
      search_contact();
      break;
    case 4:
      list_contacts();
      break;
    case 5:
      list_contacts_by_letter();
      break;
    case 6:
      list_contacts_by_month();
      break;
    }
  } while (option != 0);
  save_contacts();
  return 0;
}