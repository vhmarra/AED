//
// Created by Victor Hugo Marra Araujo on 06/06/22.
//

#ifndef LAB5AED1_LISTASEQUENCIALESTATICA_H
#define LAB5AED1_LISTASEQUENCIALESTATICA_H
typedef struct list *Lista;

Lista generate();

void print_list(Lista l);

int insert_on_list(Lista l, int element_to_insert);

int insert_orded_on_list(Lista l, int element_to_insert);

int remove_from_list(Lista l, int element_to_remove);

void remove_all_from_list(Lista l, int element_to_remove);

int retrieve_element(Lista l, int index_on_list);

#endif //LAB5AED1_LISTASEQUENCIALESTATICA_H
