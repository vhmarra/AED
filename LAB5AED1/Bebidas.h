//
// Created by Victor Hugo Marra Araujo on 09/06/22.
//

#ifndef LAB5AED1_BEBIDAS_H
#define LAB5AED1_BEBIDAS_H
typedef struct bebidas *bebidas;
bebidas generate_bebidas();
void print_bebidas(bebidas b);
int insert_data(bebidas b,char name[20],float price,int vol);
#endif //LAB5AED1_BEBIDAS_H
