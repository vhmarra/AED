#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#define max 11

int main(){
Lista lst;

lst = cria_lista();
  if(lst != NULL){
    printf("Lista inicializada!!\n");
}
imprime_lista(lst);

int elemento;
printf("Entre com elemento a ser inserido: ");
scanf("%d",&elemento);
elemento = insere_elem(lst,elemento);
  if(elemento==1){
    printf("Elemento inserido na lista!\n");
}
imprime_lista(lst);

int elemento2,x;
printf("Entre com elemento a ser removido: ");
scanf("%d",&elemento2);
x = remove_elem(lst,elemento2);
  if(x!=0){
    printf("Erro!! Elemento nao pode ser removido\n");
}
  else
    printf("Elemento removido!");

imprime_lista(lst);


  return 0;
}
