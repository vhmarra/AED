#include <stdio.h>
#include "ListaSequencialEstatica.h"
#define list_elements_size 11

int main() {
    int elements_to_insert[list_elements_size] = {4, 8, -1, 19, 2, 7, 8, 5, 9, 22, 45};
    int elements_to_insert_sorted[list_elements_size] = {1,2,3,4,5,6,6,7,8,9};
    Lista lista;
    lista = generate();
    Lista lista_sorted;
    lista_sorted = generate();
    print_list(lista);
    print_list(lista_sorted);

    for (int i = 0; i < list_elements_size; ++i) {
        int verifica = insert_on_list(lista, elements_to_insert[i]);
        if(verifica == -1) return 0;
    }
    for (int i = 0; i < list_elements_size ; ++i) {
        int verifica_sort = insert_on_list(lista_sorted,elements_to_insert_sorted[i]);
        if(verifica_sort == -1) return 0;
    }
    insert_orded_on_list(lista_sorted,-12);
    print_list(lista);
    print_list(lista_sorted);
    remove_from_list(lista,8);
    print_list(lista);

    remove_all_from_list(lista,8);
    print_list(lista);

    int element_retrieved_sorted = retrieve_element(lista_sorted,0);
    printf("%d",element_retrieved_sorted);

}
