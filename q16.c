#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){
    if (*(const int *)a > *(const int *)b){
        return 1;
    }else if(*(const int *)a < *(const int *)b){
        return -1;
    }else{
        return 0;
    }
}

int trocar(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;
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

    qsort(px, n, sizeof(int), comparacao);

    for(int i =0; i<n;i++){
        printf("%d ",*(px+i));
    }

    free(px);
}