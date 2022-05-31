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

int set_pto(pt *pt , int X1,int X2,int Y1,int Y2) {
    if(pt == NULL) return 0;
    else {
        pt->x1 = X1;
        pt->x2 = X2;
        pt->y2 = Y2;
        pt->y1 = Y1;
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
