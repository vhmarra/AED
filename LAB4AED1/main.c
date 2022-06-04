#include <stdio.h>
#include "Points.h"

int main() {
    pt *p;
    p = generate();
    double dista[4];

    for (int i = 0; i < 4 ; ++i) {
        printf("Entre com D%d: ",i+1);
        scanf("%lf",&dista[i]);
    }

    int veri = set_pto(p,dista[0],dista[1],dista[2],dista[3]);
    if(veri) {
        printf("Pontos setados sucesso\n");
    } else {
        printf("Erro ao setar pontos\n");
        return -1;
    }

    double distancia = dist(p);
    printf("distancia -> %lf",distancia);
    freeP(p);

    return 0;
}
