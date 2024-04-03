/*
1. Seja o seguinte trecho de programa:
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
Determine o valor das seguintes expressões, justificando o porquê de cada resultado:
◦ p == &i;
◦ *p - *q;
◦ **&p;
◦ 3 - *p/(*q) + 7;
*/

#include <stdio.h>

int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //Resulta em 1, pois a comparação é verdadeira.
    printf("p == &i ; output: %d \n", p==&i);
    
    //Subtração de 3 - 5 = -2
    printf("*p - *q ; output: %d \n", *p - *q);

    //REsulta no conteúdo de p. Logo, 3
    printf("**&p ; output: %d \n", **&p);
    
    //A divisão de inteiros 3/5 resulta em 0, daí 3 + 7 = 10.
    printf("3 - *p/(*q) + 7 ; output: %d \n", 3 - *p/(*q) + 7); 
}