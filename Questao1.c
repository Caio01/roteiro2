#include <stdio.h>


int converter(int hora,int min){
   int x;

    if (hora>12)
    {
        x = hora - 12;
        return x;
    }

}

int main()
{
  int hora, min;
  int horario;
  printf("Dgite o valor da hora:  \n");
  scanf("%d", &hora);

  printf("Digite o valor dos minutos: \n");
  scanf("%d", &min);

  if(hora>12){
    horario = converter(hora,min);
    printf("%d:%dpm", horario,min);

  }
  else{
     horario = converter(hora,min);
     printf("%d:%dam", horario,min);

  }


  return 0;
  }
