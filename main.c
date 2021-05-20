#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void) {
  
  empilhar(1);
  empilhar(2);
  exibir();
  printf("\n------\n");
  desempilhar();
  exibir();


  return 0;
}