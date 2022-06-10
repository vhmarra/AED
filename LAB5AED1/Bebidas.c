//
// Created by Victor Hugo Marra Araujo on 09/06/22.
//

#include "Bebidas.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#define name_size 20

struct bebidas {
    char nome[name_size];
    int vol;
    float price;
};
bebidas generate_bebidas() {
    char default_name[20] = {'d','e','f'};

    bebidas b;
    b = (bebidas) malloc(sizeof (struct bebidas));

    if (b != NULL) {
        b->vol = 0;
        b->price = 0.0;
        for (int i = 0; default_name[i] != '\0' ; ++i) {
            b->nome[i] = default_name[i];
        }
    }
    return b;
}



int insert_data(bebidas b,char name[20],float price,int vol) {
    if (b == NULL) return -1;
    for (int i = 0; name[i] != '\0' ; ++i) {
        b->nome[i] = name[i];
    }
    b->price = price;
    b->vol = vol;
    return 1;
}

void print_bebidas(bebidas b) {
    printf("nome -> ");
    for (int i = 0; b->nome[i] != '\0' ; ++i) {
        printf("%c",b->nome[i]);
    }
    printf("\n");
    printf("volume -> %d",b->vol);
    printf("\n");
    printf("price -> R$%lf",b->price);
}