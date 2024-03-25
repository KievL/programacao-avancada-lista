#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);


    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.0f \n", temp);

    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
}