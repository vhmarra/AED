//
// Created by Victor Hugo Marra Araujo on 13/06/22.
//
#include "ListaEncadeadaDinamica.h"
#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
};

List create_list() {
    return NULL;
}

int is_list_empty(List l) {
    if(l == NULL) 
        return 1;
    else 
        return 0;
}

int insert_on_list(List* lst, int elem){
    // if(lst == NULL)
    //     return 0;

    // nao é uma nova lista, é um novo nó
    List new_list = (List) malloc(sizeof(struct node));
    if(new_list == NULL)
        return 0;

    new_list->data = elem;
    new_list->next = *lst;
    *lst = new_list;
    return 1;
}

int remove_from_list(List* l, int element_to_remove) {
    if (is_list_empty(*l) == 0);
    List l_aux = *l;
    if (element_to_remove == (*l)->data) {
        *l = l_aux->next;
        free(l_aux);
        return 1;
    }
    while(l_aux->next != NULL && l_aux->next->data != element_to_remove) {
        if(l_aux->next == NULL) return 0;
        List l_aux2 = l_aux->next;
        l_aux->next = l_aux2->next;
        free(l_aux2);
        return 1;
    }
    return 0;
}

int get_posicao(List l, int pos,int *elemento){

    if(l == NULL)
        return 0;

    List aux = l;
    int i = 0;
    while(aux->next != NULL && i < pos){
         aux = aux->next;
         i++;
    }
    if(i == pos){
        *elemento = aux->data;
        return 1;
    }
    return 0;



}

void print_list(List *l) {
    List l_aux = *l;
    while((*l)->next != NULL) {
        printf("%d",(*l)->data);
        *l = l_aux->next;
    }
    free(l_aux);
}