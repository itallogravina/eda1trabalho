#include <stdio.h>
#include "arquiv.h"
#include <stdlib.h>

int main() {
  int es,elem,relem;
  cria_fila_int();
  while (1) {
  printf("     ===================\n");
  printf("    |                   |\n" );
  printf("    |  Criador de Fila  |\n");
  printf("    |                   |\n" );
  printf("     ===================\n\n");

  printf("  Inserir n elementos na fila ============= 1 \n");
  printf("  Remover n elementos na fila ============= 2 \n");
  printf("  Reiniciar a fila ======================== 3 \n");
  printf("  Imprimir a fila ========================= 4 \n");
  printf("  Sair ==================================== 5 \n\n");

printf("  Escolha uma opção:\n");
printf("  ");
scanf("%d",&es);
if(es==1){
        printf("  Qunatos elemesntos deseja Inserir na fila :\n  ");
        scanf("%d",&elem);

        if (fila_int_cheia()==1)printf("Fila cheia\n");
        else{
          for (int i = 1; i <=elem; i++) {
          enfileira_int(i);}


        printf("  Inceridos com sucesso \n");
        continue;}
    }

  if(es==2){
    printf("  Qunatos elemesntos deseja retirar da fila :\n  ");
    scanf("%d",&relem);
    for (int i = 1; i <=relem; i++) {
      desenfilera_int();
    }

    printf("  Retirados com sucesso \n");
    continue;

  }
  if(es==3){
    cria_fila_int();
  }
  if(es==4){
    system("clear");
    verfila();
    //printf("\n\nApete qualquer teclapara onctinar\n");
    continue;
  }
  if(es==5){
    break;
  }
  system("clear");
}
  return 0;
}
