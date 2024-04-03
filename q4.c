/*
4. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
foram obtidas as respostas esperadas, justificando o porque de cada uma).
*/

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
    p1 = &valor; //p1 aponta para 'valor'
    *p1 = 20; //muda o valor de 'valor' para 20;
    printf("%d \n", valor); //printa 20
    

    temp = 26.5; 
    p2 = &temp;//p2 aponta para temp
    *p2 = 29.0; // mudando o valor de temp para 29.0
    printf("%.0f \n", temp); // printa temp com nenhuma casa decimal

    p3 = &nome[0]; //p3 recebe o endereço do primeiro caracter de nome
    aux = *p3; //aux recebe o conteúdo de p3.
    printf("%c \n", aux); //printa aux, que ´e o primeiro caractere na palavra Ponteiro.

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux); // mesma coisa, mas com o quinto dígito de Ponteiros. e

    /* (e) */
    p3 = nome; //p3 aponta para a primeira letra de "Ponteiros".
    printf("%c \n", *p3);  // Printa P

    /* (f) */
    p3 = p3 + 4;//p3 aponta para a quinta. letra de "Ponteiros".
    printf("%c \n", *p3); // Printa e

    /* (g) */
    p3--; // p3 aponta para 1 byte anterior, ou seja aponta para a quarta letra de "Ponteiros".
    printf("%c \n", *p3); //printa t.

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor; //p4 aponta para o primeiro termo de vetor
    idade = *p4;// idade recebe 31.
    printf("%d \n", idade);//printa 31.

    /* (i) */
    p5 = p4 + 1; //p5 aponta para o próximo elemento do vetor.
    idade = *p5; //idade recebe 45.
    printf("%d \n", idade); // printa 45.

    /* (j) */
    p4 = p5 + 1; //p4 aponta para o próximo elemento do vetor para qual o p5 está apontando.
    idade = *p4; // idade recebe 27.
    printf("%d \n", idade); // printa 27;

    /* (l) */
    p4 = p4 - 2; //p4 aponta para o segundo elemento anterior para o qual estava apontando de vetor.
    idade = *p4; // idade recebe 31.
    printf("%d \n", idade); // printa 31.

    /* (m) */
    p5 = &vetor[2] - 1; //p5 recebe o endereço de vetor[2] -1, ou seja, vetor[1].
    printf("%d \n", *p5);//printa 45.

    /* (n) */
    p5++; //p5 aponta para o próximo elemento do vetor.
    printf("%d \n", *p5);//printa 27.
    return(0);
}