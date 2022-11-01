/*
Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duraçao, em
segundos, de uma experiência biologica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.
*/

int main()
{
  int hora, minuto, segundo, tempoEmSegundos, duracao, tempoFinal, resto;
  printf("Digite o horario de inicio: ");
  scanf("%d:%d:%d", &hora, &minuto, &segundo);
  printf("Digite a duracao em segundos: ");
  scanf("%d", &duracao);

  tempoEmSegundos = horarioParaSegundos(hora, minuto, segundo);
  tempoFinal = tempoEmSegundos + duracao;

  hora = (tempoFinal - (tempoFinal % 3600)) / 3600;
  resto = tempoFinal % 3600;
  minuto = (resto - (resto % 60)) / 60;
  resto = resto % 60;
  tempoFinal = resto;

  printf("O horario de termino eh as %d hora(s), %d minuto(s) e %d segundo(s)", hora, minuto, tempoFinal);

  return 0;
}

int horarioParaSegundos(int hour, int minute, int second)
{
  return hour * 3600 + minute * 60 + second;
}
