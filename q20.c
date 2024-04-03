/*
20. Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o
resultado deve ficar armazenado em C).
*/

#include <stdio.h>
#include <stdlib.h>

//função para a multiplicação como foi pedida.
void multiplica_matrizes(int **a, int **b, int **c, int la, int ca, int cb){
    for(int col =0;col<cb;col++){
        for(int lin=0;lin<la;lin++){
            for (int z=0;z<ca;z++){
                *(*(c+lin)+col)+=(*(*(a+lin)+z)*(*(*(b+z)+col)));
            }
        }
    }
}

//função para printar os elementos de uma matriz qualquer.
void printar_matriz(int **a, int l, int c){
    for(int i =0 ; i<l;i++){
        for(int j = 0; j<c;j++){
            printf("%d ",*(*(a+i) + j));
        }
        printf("\n");
    }
}

int main(){
    int la, ca;
    int lb, cb;
    
    printf("Linhas de A: ");
    scanf("%d", &la);
    printf("Colunas de A: ");
    scanf("%d", &ca);

    printf("Linhas de B: ");
    scanf("%d", &lb);
    printf("Colunas de B: ");
    scanf("%d", &cb);

    //utilizando a forma otimizada para alocar matriz.
    int **a;
    a = malloc(la*sizeof(int *));
    a[0] = malloc(la*ca*sizeof(int));

    for(int i =1; i<la;i++){
        a[i]=a[i-1]+ca;
    }

    //preenchendo matriz a.
    for(int i =0 ; i<la;i++){
        for(int j = 0; j<ca;j++){
            printf("A[%d][%d]: ", i+1,j+1);
            scanf("%d", (*(a+i)+j));
        }
    }

    //alocando b da forma otimizada.
    int **b;
    b = malloc(lb*sizeof(int *));
    b[0] = malloc(lb*cb*sizeof(int));

    for(int i =1; i<lb;i++){
        b[i]=b[i-1]+cb;
    }

    //preenchendo matriz b.
    for(int i =0 ; i<lb;i++){
        for(int j = 0; j<cb;j++){
            printf("B[%d][%d]: ", i+1,j+1);
            scanf("%d", (*(b+i)+j));
        }
    }
    
    //alocando matriz c.
    int **c;
    c = malloc(la*sizeof(int *));
    c[0] = malloc(la*cb*sizeof(int));
    
    for(int i =1; i<la;i++){
        c[i]=c[i-1]+cb;
    }
    
    //preenchendo matriz c.
    for(int i =0 ; i<la;i++){
        for(int j = 0; j<cb;j++){
            *(*(c+i)+j)=0;
        }
    }
    printf("A:\n");
    printar_matriz(a, la, ca);
    printf("B:\n");
    printar_matriz(b, lb, cb);
    printf("AxB:\n");

    //fazendo a multiplicação.
    multiplica_matrizes(a,b,c,la,ca,cb);

    //printando o resultado.
    printar_matriz(c, la, cb);

    //liberando a memória.
    free(c[0]);
    free(c);
    free(b[0]);
    free(b);
    free(a[0]);
    free(a);
}