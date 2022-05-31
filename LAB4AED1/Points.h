//
// Created by Victor Hugo Marra Araujo on 30/05/22.
//

#ifndef LAB4AED1_POINTS_H
#define LAB4AED1_POINTS_H
typedef struct pt pt;
struct pt* generate();
int set_pto(pt *P, double X1, double X2, double Y1, double Y2);
void freeP(pt *P);
struct pt* get_pontos(pt *p);
double dist(pt *P);

#endif //LAB4AED1_POINTS_H
