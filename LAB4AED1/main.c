#include <stdio.h>
#include "Points.h"

int main() {
    pt *p;
    p = generate();
    int veri = set_pto(p,13.0,1.0,1.0,1.0);
    if(veri) {
        printf("Pontos setados sucesso\n");
    } else {
        printf("Erro ao setar pontos\n");
        return -1;
    }

    double distancia = dist(p);
    printf("%lf",distancia);
    freeP(p);

    return 0;
}
