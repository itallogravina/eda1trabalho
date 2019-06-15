#include "arquiv.h"
#include <stdio.h>
#define N 10
static int fila_int[N];
static int p,u;

void cria_fila_int(){
  p=0;u=0;
}

void enfileira_int(int y){
  fila_int[u++] = y;
}

int desenfilera_int(){
  return fila_int[p++];
}

int fila_int_vazia(){
  if (p==u) cria_fila_int();
  return p==u;
}

int fila_int_cheia(){
  return u == N;
}

void verfila(){
  printf("\n");
    printf(" ==================================================================================\n");
  for (int i = p; i < N; i++) {
    if(fila_int[i]!=0)
    printf(" ||   %d ",fila_int[i]);
    else{
      printf(" || XXX " );
    }
  }printf(" ||");
  printf("\n");
  printf(" ==================================================================================\n");



for (int j = p; j < N; j++) {
  if(j==p){
    printf("      p");
  }
}

for (int j = p+1; j < N; j++) {
  if(j==u-1)
  printf("        u");
  else printf("        ",j);
}
printf("\n");
}
