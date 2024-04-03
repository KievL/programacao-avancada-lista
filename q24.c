/*
24. Um usuário precisa implementar o controle de uma matriz de leds com 8 x 8 elementos. Para
isso, ele criou um programa em C dotado de uma matriz da forma
unsigned char m[8][8];
para armazenar os estados dos leds. Como existem apenas dois estados possíveis para os leds
(aceso ou apagado), ele assumiu que leds acessos seriam denotados pelo inteiro "1" nessa matriz
e leds apagados seriam denotados pelo inteiro "0".
Ocorre que a função que controla os leds exige que a informação que controla a matriz seja
enviada via porta serial usando uma função que recebe um único inteiro não sinalizado de
64 bits, da forma send(unsigned long estado). Nesse inteiro, os bytes mais significativos deverão
guardar os estados das linhas iniciais da matriz de leds, enquanto os bytes menos significativos
devem guardar os estados das linhas finais da matriz. Assim, é necessário que cada estado
previsto na matriz m seja codificado em um bit correspondente na variável enviada pela função.
Crie um programa em linguagem C para realizar essa codificação e explique na forma de
comentários como sua codificação da matriz m na variável de 64 bits foi realizada.
*/

#include <stdio.h>

void main(){
    //um estaado qualquer para teste
    unsigned long estado= 2577565;

    //a matriz 8x8
    unsigned char m[8][8];

    //iterando entre os 64 bits
    for(int i =63; i>=0;i--){
        //pegando o valor do bit menos significativo por operador and bit a bit.
        unsigned char x = estado & 1;

        //movendo os bits 1 casa para direita para a próxima comparação.
        estado = estado >> 1;

        //valor da primeira coordenada.
        int pos1 = i/8;

        //o resto será o valor da segunda.
        int pos2 = i%8;

        //atribuindo cada valor ao seu respectivo local na matriz.
        m[pos1][pos2] = x;
    }

    //printando a matriz.
    for(int i =0;i<8;i++){
        for(int j = 0; j< 8; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

}