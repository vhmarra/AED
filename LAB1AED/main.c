#include <stdio.h>
#include <math.h>

//Todos os metodos serao encapusulados sem retorno de valor


//TODO refazer esse exercicio levando em consideracao as porcentagens
void ex1() {
    int value_one = 0;
    int value_two = 0;
    int value_three = 0;
    int prize_value = 0;

    printf("Entre com o valor da aposta 1: ");
    scanf("%d", &value_one);
    printf("Entre com o valor da aposta 2: ");
    scanf("%d", &value_two);
    printf("Entre com o valor da aposta 3: ");
    scanf("%d", &value_three);
    printf("Entre com o valor do premio: ");
    scanf("%d", &prize_value);

    double total_bet = value_one + value_two + value_three;
    double percentage_one = value_one/total_bet;
    double percentage_two = value_two/total_bet;
    double percentage_three = value_three/total_bet;


    printf("Jogador 1 recebera = %f \n",prize_value * percentage_one);
    printf("Jogador 2 recebera = %f \n",prize_value * percentage_two );
    printf("Jogador 3 recebera = %f \n",prize_value * percentage_three );
}

void ex2() {
    double x1 = 0.0;
    double x2 = 0.0;
    double y1 = 0.0;
    double y2 = 0.0;

    printf("Entre com o valor de X1: ");
    scanf("%lf",&x1);
    printf("Entre com o valor de Y1: ");
    scanf("%lf",&y1);

    printf("Entre com o valor de X2: ");
    scanf("%lf",&x2);
    printf("Entre com o valor de Y2: ");
    scanf("%lf",&y2);

    double distance = sqrt((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1));
    printf("Distancia eh: %lf",distance);

}

void ex3() {
    int binary_num = 0;
    int decimal_num = 0;
    int remain = 0;


    printf("Entre com o numero em binario: ");
    scanf("%d",&binary_num);

    for (int i = 0; binary_num != 0; ++i) {
        remain = binary_num % 10;
        binary_num = binary_num / 10;
        decimal_num = decimal_num + (remain) * (pow(2,i));
    }
    printf("Decimal num = %d",decimal_num);

}

void ex4() {
    double mass;
    double height;
    double imc;

    printf("Entre com a altura em metros: ");
    scanf("%lf",&height);

    printf("Entre com massa em Kg: ");
    scanf("%lf",&mass);

    imc = mass / pow(height,2);
    if(imc < 18.5) printf("Magreza");
    if(imc >= 18.5 && imc <= 24.9) printf("Saudavel");
    if(imc >= 25.0 && imc <= 29.9) printf("Sobrepeso");
    if(imc >= 30.0 && imc <= 34.9) printf("Obesidade grau I");
    if(imc >= 35.0 && imc <= 39.9) printf("Obesidade grau II");
    if(imc >= 40.0) printf("Obesidade grau III");

}

void ex5() {
    int n, i, c, a = 1;

    printf("Entre com o numero de colunas: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        for (c = 1; c <= i; c++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}

//COM INT O VALOR ULTRAPASSA O VALOR
long int ex6(int number) {
    if(number == 0) return 1;
    else return (number * ex6(number-1));
}

void ex8() {
    int FIVE = 5;
    int numbers[5];
    for (int i = 0; i < FIVE ; ++i) {
        int temp;
        printf("valor %d: ",i+1);
        scanf("%d",&temp);
        numbers[i] = temp;
    }

    double mean = 0.0;
    for (int i = 0; i < FIVE; ++i) {
        mean += numbers[i];
    }
    mean = mean/FIVE;

    printf("Media : %lf\n",mean);
    double sum_increment = 0.0;
    for (int i = 0; i < FIVE ; ++i) {
        sum_increment = sum_increment + pow((numbers[i] - mean),2);
    }
    double one_under_n = 1.0 / FIVE;
    double standard_deviation = sqrt((one_under_n * sum_increment));
    printf("Desvio padrao : %lf",standard_deviation);

}

void ex9() {
    int ASCII_SHIFTER = 32;
    char name[50];
    printf("Entre com o nome: ");
    scanf("%[^\n]s",name);
    printf("nome = %s\n",name);

    //iterando ate achar o enter
    for (int i = 0; name[i] != '\0'; ++i) {
        if(name[i] >= 'a' && name[i] <= 'z')
            name[i] -= ASCII_SHIFTER;
    }
    printf("nome maiusculo = %s",name);
}

//ISSO TA INCOMPLETO
void ex10() {
    int rows = 6;
    int columns = 6;
    int i,j=0;
    int vector[rows][columns];

    for(i=0;i<rows;i++) {
        for(j=0;j<columns;j++) {
            scanf("%d",&vector[i][j]);
        }
    }


}

struct address {
    char street_name[50];
    int house_num;
    char complement[50];
    char district[50];
    char cep[8];
    char city[50];
    char state[50];
    char country[50];
};
struct data {
    char name[50];
    char email[50];
    char phone_number[50];
    char birthday[8];
    char obs[256];
    struct address user_address;
};

//ISSO TA INCOMPLETO
void ex11() {
    int persons = 1;
    struct data agenda[persons];
    for(int i=0;i<persons;i++) {
        printf("Entre com o nome: ");
        scanf("%[^\n]s",&agenda[i].name);
        scanf("Entre com o email: ");
        scanf("%[^\n]s",&agenda[i].email);
        printf("Entre com o numero de telefone: ");
        scanf("%[^\n]s",&agenda[i].phone_number);
        printf("Entre com o aniversario: ");
        scanf("%[^\n]s",&agenda[i].birthday);
        printf("Entre com uma observacao adicional: ");
        scanf("%[^\n]s",&agenda[i].obs);
    }
}

int main() {
    //ex1();
    //ex2();
    //ex3();
    //ex4();
    //ex5();
//    for (int i = 0; i <= 15 ; ++i) {
//        printf("factorial : %ld\n", ex6(i));
//    }
    //ex8();
    //ex9();
    ex11();
}

