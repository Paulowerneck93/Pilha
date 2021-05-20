#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define TAM_PILHA 3

int pilha[TAM_PILHA], topo=0;

void empilhar(int valor){

  if(cheia()){

    printf("Pilha cheia!");

  }
  else{

    pilha[topo] = valor;
    topo++;

  }

}

int desempilhar(){

  if(vazia()){

    printf("Pilha vazia!");

  }
  else{

    topo--;
    return pilha[topo];

  }

  return 0;

}

void exibir(){

  if(vazia()){

    printf("Pilha vazia!");

  }
  else{

    for(int i=0; i<topo; i++){
      printf("%i\n", pilha[i]);
    }

  }

}

int vazia(){

  if(topo == 0){
    return 1;
  }
  else{
    return 0;
  }

}

int cheia(){

  if(topo == TAM_PILHA){
    return 1;
  }
  else{
    return 0;
  }

}

void esvaziar(){

  while(!vazia()){
    desempilhar();
  }

}