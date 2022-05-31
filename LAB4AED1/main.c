#include <stdio.h>
#include "Points.h"

int main() {
    pt *p;
    p = generate();

    if(set_pto(p,1.0,1.0,1.0,1.0) == 1) {
        printf("Pontos setados sucesso");
    } else {
        printf("Erro ao setar pontos");
        return -1;
    }

    double distancia = dist(p);
    printf("%lf",distancia);
    freeP(p);

    return 0;
}
