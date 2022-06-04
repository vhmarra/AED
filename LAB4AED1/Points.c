//
// Created by Victor Hugo Marra Araujo on 30/05/22.
//

#include "Points.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

struct pt {
    int x1;
    int x2;
    int y1;
    int y2;
};

 struct pt* generate() {
     pt *p;
    p = (pt *) malloc(sizeof(struct pt));
    return p;
}

int set_pto(pt *P , double X1,double X2,double Y1,double Y2) {
    if(P == NULL) return 0;
    else {
        P->x1 = X1;
        P->x2 = X2;
        P->y2 = Y2;
        P->y1 = Y1;
        return 1;
    }
}

struct pt* get_pontos(pt *p) {
    return p;
 }

double dist(pt *p) {
    double distance = sqrt((p->x2-p->x1) * (p->x2-p->x1)) + ((p->y2-p->y1) * (p->y2-p->y1));
    return distance;
 }

void freeP(pt *p) {
    free(p);
 }
