#include <stdio.h>
#include <stdlib.h>

typedef struct pontos pontos;

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();

int main() {
    //ex1();
    //ex2();
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    ex7();

    return 0;
}

void ex1() {
    int a = 40;
    int *p;
    p = &a;

    printf("%d\n",p);
    printf("%d",&a);

    printf("Entre com p: ");
    scanf("%d",p);
    printf("Entre com a: ");
    scanf("%d",a);

    printf("a= %d",&a);
    printf("\np =%d",&p);
}

void ex2() {
    char nome[] = "Jose Augusto";
    char *nomep = nome;
    for (int i = 0; i < sizeof(nome); ++i) {
        printf("%c",nomep[i]);
    }
}

void ex3() {
    double vectorp[] = {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
    for (int i = 0; i < 10; ++i) {
        printf("%f\n",*(vectorp+i));
    }
}


void ex4() {
    int vectorp[] = {1,2,3,4,5,6,7,8,9,10,11};
    for (int i = 10; i >= 0 ; --i) {
        printf("%d\n",*(vectorp+i));
    }
}

void ex5() {
    int *numbers;
    int size;
    printf("Entre com o tamanho da lista: ");
    scanf("%d",&size);

    numbers = (int*) malloc(size*sizeof(int));

    for(int i=0;i<size;i++) {
        printf("Entre com o valor: ");
        scanf("%d",&numbers[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("%d",*(numbers+i));
    }
    free(numbers);
}

void ex6() {
    int *numbers;
    int size;
    printf("Entre com o tamanho da lista: ");
    scanf("%d",&size);

    numbers = (int*) malloc(size*sizeof(int));


    for(int i=0;i<size;i++) {
        printf("Entre com o valor: ");
        scanf("%d",&numbers[i]);
    }

    for (int i = 0; i < size; ++i) {
        if (*(numbers+i) % 2 == 0) {
            printf("%d eh par\n",*(numbers+i));
        } else {
            printf("%d eh impar\n",*(numbers+i));
        }
    }
    free(numbers);
}

struct pontos{
    int x1;
    int x2;
    int y1;
    int y2;
};
void ex7() {
    int size;
    printf("Entre com a quantidade de pontos: ");
    scanf("%d",&size);

    pontos *coord = (pontos *) malloc(size * sizeof(pontos));
    for (int i = 0; i < size ; ++i) {
        printf("Entre com x1: ");
        scanf("%d",&coord[i].x1);
        printf("Entre com x2: ");
        scanf("%d",&coord[i].x2);
        printf("Entre com y1: ");
        scanf("%d",&coord[i].y1);
        printf("Entre com y2: ");
        scanf("%d",&coord[i].y2);
    }
    for (int i = 0; i < size ; ++i) {
        printf("COORDENADA %d : (x1,x2) -> %d,%d\n",i+1,coord[i].x1,coord[i].x2);
        printf("COORDENADA %d : (y1,y2) -> %d,%d\n",i+1,coord[i].y1,coord[i].y2);
    }
}
