#include "arquiv.h"
#include <stdio.h>
static int *fila_int;
static int N, p, u;

void cria_fila() {
    N = 100;
    fila_int = malloc( N * sizeof(int) );
    p = 0; u = 0;
}

void enfileira_int(int y){
    int ret = 1;
    if ( u == N-1 ) ret = redimensiona();
    if ( ret ) fila_int[u++] = y;
    return ret;
}

int desenfilera_int(int *c){
  if ( !fila_vazia() ) {
  *c = fila_int[p++];
if (p == N) p = 0;
return 1;
}
return 0;
}

int fila_int_vazia(){
  
  return p==u;
}

int fila_int_cheia(){
  return (u+1)%N == p;
}

void libera_fila() {
free(fila_int);
}

int redimensiona() {
int i, j;
fila_int = realloc( fila_int, 2 * N * sizeof(char) );
if ( fila_int == NULL ) return 0;
/* Caso 2 */
if ( u-1 < N-p ) {
for ( i = N, j = 0; j < u; i++, j++ ) {
fila_int[i] = fila_int[j];
}
u = N+u;
}
/* Caso 3 */
else {
for ( i = p, j = N+p; i < N; i++, j++ ) {
fila_int[j] = fila_int[i];
}
p = N+p;
}
N *= 2;
return 1;
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
