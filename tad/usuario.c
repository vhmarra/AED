#include <stdio.h>
#include <stdlib.h>
#include "Racional.h"

int main(){
int Num, Den;

racional *R1, *R2, *R3,*Num1,*Num2,*Num3,*Num4,*Num5,*Num6,*Num7;
R1=generate();
R2=generate();
Num1=generate();
Num2=generate();
Num3=generate();
Num4=generate();



if (R1 == NULL || R2 == NULL || R3==NULL|| Num1==NULL || Num2==NULL || Num3==NULL) {
  printf ("Nao foi possivel criar os dois numeros racionais.\n");
  return -1;
}

printf("\nEntre o numerador do 1o Racional eh: ");
scanf("%d",&Num);
printf("\nEntre o denominador do 1o Racional eh: ");
scanf("%d",&Den);
if (set_value(Num1, Num, Den) == 0){
  printf ("Nao foi possivel preencher o primeiro numero racional.\n");
  return -1;
}

printf("\nEntre o numerador do 2o Racional: ");
scanf("%d",&Num);
printf("\nEntre o denominador do 2o Racional: ");
scanf("%d",&Den);
if (set_value(Num2, Num, Den) == 0){
  printf ("Nao foi possivel preencher o primeiro numero racional.\n");
  return -1;
}

printf("\nEntre o numerador do 3o Racional eh: ");
scanf("%d",&Num);
printf("\nEntre o denominador do 3o Racional eh: ");
scanf("%d",&Den);
if (set_value(Num3, Num, Den) == 0){
  printf ("Nao foi possivel preencher o primeiro numero racional.\n");
  return -1;
}

printf("\nEntre o numerador do 4o Racional eh: ");
scanf("%d",&Num);
printf("\nEntre o denominador do 4o Racional eh: ");
scanf("%d",&Den);
if (set_value(Num3, Num, Den) == 0){
  printf ("Nao foi possivel preencher o primeiro numero racional.\n");
  return -1;
}

Num5 = soma(Num1,Num2);
Num6 = soma(Num3,Num4);
Num7 = produto(Num5,Num6);

if(Num7!=NULL){
  printf("\n O valor do racional resultante do produto eh ");
  print_value(Num7);
  return 0;
}
}
