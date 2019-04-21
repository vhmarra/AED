#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

struct noh{
  int info;
  struct noh *prox;
};

cria_lista(){
return NULL;
}

int lista_vazia(Lista *lst){
if(lst==NULL){
  return 0; //LISTA VAZIA.
}
else
  return 1; //LISTA NAO VAZIA
}

int insere_elem(Lista *lst, int elem){
Lista Nova = (Lista) malloc(sizeof(struct noh)); // ALOCAR UM NOVO NÒ

if(Nova==NULL){
  return 0; // NO NAO ALOCADO
}
Nova->info = elem; //INSERE O VALOR DE ELEMNTO

Nova->prox = *lst; //APONTA PRO PRIMEIRO NÒ DA LISTA

*lst=Nova; // FAZ A LISTA APONTAR PARA UM NOVO NÒ
  return 1;
}

int remove_elemento(Lista *lst, int elem){
if(lista_vazia(*lst)==1){
  return 0; //LISTA VAZIA
}
Lista aux = *lst; //Ponteiro para primeiro nó,

if(elem==(*lst)->info){
  *lst=aux->prox;//APONTANDO PRO SEGUNDO NÒ
  free(aux);
  return 1;
}
while(aux->prox != NULL && aux->prox->info != elem) //PERCORRE ATÈ ACHAR O ELEM OU FINAL DA LISTA
  aux=aux->prox;

if(aux->prox==NULL)//FINAL DA LISTA
  return 0; //FALHOU

//Remove o elemento =! primeiro no da lista
Lista aux2 = aux->prox;
aux->prox = aux2->prox;
free(aux2);
return 1;
}



