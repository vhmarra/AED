//
// Created by Victor Hugo Marra Araujo on 13/06/22.
//

#ifndef LAB6AED1_LISTAENCADEADADINAMICA_H
#define LAB6AED1_LISTAENCADEADADINAMICA_H
typedef struct node *List;
List create_list();
int is_list_empty(List l);
int insert_on_list(List *l,int element_to_insert);
int remove_from_list(List *l,int element_to_remove);
int get_posicao(List l, int pos,int *elemento);
void print_list(List *l);
#endif //LAB6AED1_LISTAENCADEADADINAMICA_H
