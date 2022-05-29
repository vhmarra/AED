#include <stdio.h>
#include <stdlib.h>
#define POPULATION_SIZE 100

float generate_random();
int generate_binary();

struct individuo {
    int cod_genetico[10];
    float aptidao_abs;
    float aptidao_relativa;

};
struct populacao {
    struct individuo *pop;
    int tamanho_pop;
};
typedef struct populacao populacao;
typedef struct individuo individuo;
void print_aptidao(struct individuo *individuo) {
    for (int i=0; i < POPULATION_SIZE; ++i) {
        printf("individuo -> %d aptidao relativa -> %f\n",i+1,individuo[i].aptidao_relativa);
    }
}

int main() {
    float apt = 0.0;
    struct individuo *individuo = (struct individuo *) malloc(POPULATION_SIZE* sizeof(struct individuo));
    for(int i = 0; i < POPULATION_SIZE; ++i) {
        for (int j=0;j<10;j++) {
            individuo[i].cod_genetico[j] = generate_binary();
        }
        individuo[i].aptidao_abs = generate_random();
    }

    for (int i = 0;i<POPULATION_SIZE;++i) {
        apt = apt + individuo[i].aptidao_abs;
    }

    for (int i=0;i<POPULATION_SIZE;++i) {
        individuo[i].aptidao_relativa = individuo[i].aptidao_abs/apt;
    }
    print_aptidao(individuo);
    return 0;
}



float generate_random() {
    float number = (float)rand() /(float)(RAND_MAX)*10.0;
    return number;
}

int generate_binary() {
    return rand() % 2;
}



