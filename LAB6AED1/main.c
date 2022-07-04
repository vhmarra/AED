#include <stdio.h>
#include "stdlib.h"
#include "ListaEncadeadaDinamica.h"

int main() {
    List lista;
    int elemento;
    lista = create_list();
    printf("%d\n",is_list_empty(lista));
    printf("%d\n",insert_on_list(&lista,2));
    printf("%d\n",insert_on_list(&lista,3));
    printf("%d\n",insert_on_list(&lista,4));
    printf("%d\n",insert_on_list(&lista,5));
    
    // primeiro elemento da lista
    if(get_posicao(lista, 0, &elemento)){
        printf("elemento '%d' encontrado na posição 0\n", elemento);
    }    
    else{
        printf("elemento nao encontrado\n");
    }

    // posição nao pertencente a lista // pos > tamanho da lista
    if(get_posicao(lista, 7, &elemento)){
        printf("elemento '%d' encontrado na posição 7\n", elemento);
    }    
    else{
        printf("elemento nao encontrado\n");
    }
    


    //print_list(&lista);
   

    return 0;
}
