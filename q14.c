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
    int (*f) (int, int);

    int x=1, y=5;

    f = soma;
    printf("x+ y = %d \n", f(x, y));
    
    f=subtracao;
    printf("x - y = %d \n", f(x, y));
}