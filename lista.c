#include "arquiv.h"
#include <stdio.h>
    

typedef struct reg {
   int         conteudo;
   struct reg *prox;
} celula;
