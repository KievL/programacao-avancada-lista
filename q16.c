/*16. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//função de comparação exigida pelo qsort()
int comparacao(const void *a, const void *b){
    if (*(const int *)a > *(const int *)b){
        return 1;
    }else if(*(const int *)a < *(const int *)b){
        return -1;
    }else{
        return 0;
    }
    //jeito mais fácil é retornar o valor de *(const int *)a < *(const int *)b que tbm funciona.
}

int main(){
    //pelo qsort
    printf("Quantos números? \n");

    int n;
    scanf("%d", &n);
    int *px = malloc(n*sizeof(int));

    for(int i =0; i<n;i++){
        scanf("%d",px+i);
    }

    //medindo o tempo para a questão 18. 
    clock_t start = clock();
    qsort(px, n, sizeof(int), comparacao);
    clock_t end = clock();

    //faz o delta dos clocks e transforma em segundos
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %.7f segundos\n", elapsed_time);
    for(int i =0; i<n;i++){
        printf("%d ",*(px+i));
    }
    //era para o qsort ser mais rápido que a minha função, já que ele foi construído para ter eficiência.
    //mas a minha função ainda foi mais rápida que o qsort. creio que seja porque utilizei uma array pequena.
    free(px);
}