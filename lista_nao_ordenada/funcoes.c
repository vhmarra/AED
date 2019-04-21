#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#define max 11

struct lista{
  int no[max];
  int Fim;
};

Lista cria_lista(){
Lista lst;
lst = (Lista ) malloc(sizeof(struct lista));

  if(lst != NULL){
    lst->Fim = 0; //LISTA VAZIA
    return lst;
    }
}

int lista_vazia(Lista lst){
  if(lst->Fim = 0){
    return 1;//lista vazia
}
  else
    return 0;//lista com elementos
}

int lista_cheia(Lista lst){
  if(lst->Fim == max)
    return 1; //lista cheia

else
    return 0; //lista nao cheia
}

int insere_elem(Lista lst, int elem){
  if(lst==NULL || lista_cheia(lst)==1)
    return 0;

lst->no[lst->Fim] = elem; // insere no fim da lista
lst->Fim++; //avanca o final
  return 1;
}

int remove_elem(Lista lst, int num){
int i=0;
  if(lista_vazia(lst) == 1)
    return 0;
  if(num == lst->no[lst->Fim-1]){
    lst->Fim--;
      return 1;
}
for(i=0;i<lst->Fim;i++){
  if(lst->no[i] == num){
    while(i<lst->Fim){
      lst->no[i] = lst->no[i+1];
      i++;
}
lst->Fim--;
return 1;
}
}
    return 0;
}

void imprime_lista(Lista lst){
  int i=0;
  printf("Lista:");
  printf("{");
  for(i=0;i<=lst->Fim;i++){
    printf("%d",lst->no[i]);
}
  printf("}\n");
}
