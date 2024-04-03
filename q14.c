/*
14. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. Explique seu programa,
comentando cada uma das linhas de código.
*/

// Um ponteiro para uma função é um ponteiro que aponta para o endereço de memória de uma função.
// Dessa maneira, podemos utilizar o ponteiro para executar a função para qual ele aponta.
// Isso pode ser útil para a criação de algoritmos genéricos.

// Exemplo:
#include <stdio.h>

int soma(int a, int b){
    return a+b;
}

int subtracao(int a, int b){
    return a-b;
}

int main(){
    int (*f) (int, int); //ponteiro para função com dois parâmetros.

    int x=1, y=5;

    f = soma; // o ponteiro aponta para soma
    printf("x+ y = %d \n", f(x, y)); //realiza a soma
    
    f=subtracao; //ponteiro aponta para subtração
    printf("x - y = %d \n", f(x, y)); //faz a subtração
}