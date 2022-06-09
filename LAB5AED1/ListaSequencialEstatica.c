//
// Created by Victor Hugo Marra Araujo on 06/06/22.
//

#include "ListaSequencialEstatica.h"
#include "stdio.h"
#include "stdlib.h"
#define size 20
#define ZERO 0

struct list {
    int num[size];
    int last;
};

Lista generate() {
    Lista lst;
    lst = (Lista) malloc(sizeof( struct list));
    if (lst != NULL) {
        lst->last = 0;
        return lst;
    }
}



int is_list_full(Lista lst) {
    if (lst->last == size)
        return 1;
    else return 0;
}

int is_list_empty(Lista lst) {
    if (lst->last == ZERO) {
        return 1;
    }
    else return 0;
}

void print_list(Lista lst_to_print) {
    for (int i = 0; i < lst_to_print->last; ++i) {
        printf(" %d ",lst_to_print->num[i]);
    }
    printf("\n");
}

int insert_on_list(Lista lst, int element_to_insert) {
    if (lst == NULL || is_list_full(lst)) {
        return -1;
    }
    else {
        lst->num[lst->last] = element_to_insert;
        lst->last = lst->last+1;
        return 1;
    }
}

//aqui assumo que a list esta ordenada
int insert_orded_on_list(Lista l, int element_to_insert) {
    if(l == NULL) return 0;

    int i;
    for (i = 0; i < l->last && l->num[i] < element_to_insert; ++i);

    for(int j = i; j < l->last; j++)
        l->num[j+1] = l->num[j];

    l->num[i] = element_to_insert;
    l->last++;

    return 1;

}

int remove_from_list(Lista lst, int element_to_remove) {
    if (is_list_empty(lst)) {
        return -1;
    }
    else {
        if (element_to_remove == lst->num[lst->last]) {
            lst->last = lst->last - 1;
            return 1;
        }
        for (int j = 0; j < lst->last ; ++j) {
            if(lst->num[j] == element_to_remove) {
                while(j < lst->last) {
                    lst->num[j] = lst->num[j+1];
                    j++;
                }
            }
            
        }
        lst->last--;
        return 1;
    }
}
int is_element_on_list(Lista lst, int element) {
    for (int j = 0; j < lst->last; ++j) {
        if (lst->num[j] == element) {
            return 1;
        }
    }
    return 0;
}

void remove_all_from_list(Lista l, int element_to_remove) {
    while (is_element_on_list(l,element_to_remove)) {
        remove_from_list(l,element_to_remove);
    }
}

int retrieve_element(Lista lst, int index_on_list) {
    if (is_list_empty(lst) || index_on_list > size) {
        return -1;
    }
    else {
        return lst->num[index_on_list];
    }
}

