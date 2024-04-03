#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int trocar(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;
}

void ordenarArray(int * lista, int tamanho, int (*comparacao) (int*, int*)){
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            int resultadoComparacao = comparacao((lista+j), (lista+j+1));
            if (resultadoComparacao>0) {
                trocar(lista+j, lista+j+1);
            }
        }
    }
}

int comparacaoFunc(int * a, int *b){
    return *a - *b;
}

int main(){
    //criando a propria funcao de ordenacao
    printf("Quantos números? \n");

    int n;

    scanf("%d", &n);

    int *px = malloc(n*sizeof(int));

    for(int i =0; i<n;i++){
        scanf("%d",px+i);
    }
    clock_t start = clock();
    ordenarArray(px, n, comparacaoFunc);
    clock_t end = clock();

    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo decorrido: %.7f segundos\n", elapsed_time);
    for(int i =0; i<n;i++){
        printf("%d ",*(px+i));
    }

    free(px);
}