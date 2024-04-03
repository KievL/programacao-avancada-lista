/*17. Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria
função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua
função deverá receber, entre outros argumentos, um ponteiro para a função de comparação
que determinará como os elementos do array serão ordenados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//função para trocar
int trocar(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;
}

//função para ordenar a array
void ordenarArray(int * lista, int tamanho, int (*comparacao) (int*, int*)){
    //mesma lógica do bubble sort
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            //comparacao é a função recebida como argumento.
            int resultadoComparacao = comparacao((lista+j), (lista+j+1));
            if (resultadoComparacao>0) {
                trocar(lista+j, lista+j+1);
            }
        }
    }
}

//função de comparaçao que será passada como um ponteiro
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
    //medindo o tempo
    clock_t start = clock();
    //executando a função passando a função como um ponteiro
    ordenarArray(px, n, comparacaoFunc);
    clock_t end = clock();

    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo decorrido: %.7f segundos\n", elapsed_time);
    for(int i =0; i<n;i++){
        printf("%d ",*(px+i));
    }
    //resultado da medição explicado na questão anterior.
    free(px);
}