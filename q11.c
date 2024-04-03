/*
11. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
◦ x for declarado como int?
◦ x for declarado como float?
◦ x for declarado como double?
Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.
*/

#include <stdio.h>

int main(){

    //Irá printar o endereço de memória com incremento de 1 byte.
    // 4092 4093 4094 4095
    char x1[4];
    printf("CHAR: \n");
    for(int i =0; i<4;i++){
        printf("x1[%d]: %X\n", i,x1+i);
    }

    //Irá printar o endereço de memória com incremento de 2 bytes.
    // 4092 4094 4096 4098
    int x2[4];
    printf("\nINT: \n");
    for(int i =0; i<4;i++){
        printf("x2[%d]: %X\n", i,x2+i);
    }

    //Irá printar o endereço de memória com incremento de 4 bytes.
    // 4092 4094 4096 4100
    float x3[4];
    printf("\nFLOAT: \n");
    for(int i =0; i<4;i++){
        printf("x3[%d]: %X\n", i,x3+i);
    }

    //Irá printar o endereço de memória com incremento de 8 bytes.
    // 4092 4100 4108 4116
    double x4[4];
    printf("\nDOUBLE: \n");
    for(int i =0; i<4;i++){
        printf("x4[%d]: %X\n", i,x4+i);
    }
    
}