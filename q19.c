/*
19. Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos
correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo
usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor
contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A
função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos
presentes em cada vetor. Exemplo:
*/

#include <stdio.h>

//função para somar os vetores
void soma_vetores(int *a, int *b, int *c, int tam){
    for(int i =0; i<tam; i++){
        //somando cada coordenada igualmente
        *(c+i) = *(a+i) + *(b+i);
    }
}

int main(){
    int l1[4], l2[4], l3[4];

    //inicializando as arrays
    for(int i =0; i<4; i++){
        l1[i]=i;
        l2[i]=i*3;
    }

    //somando
    soma_vetores(l1, l2 , l3, 4);

    for(int i = 0; i<4; i++){
        printf("%d ",*(l3+i)); 
    }
    
    printf("\n");
    return 0;
}