#include <stdio.h>
#include <stdlib.h>

int trocar(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;
}

int main(){
    //pelo método da bolha
    printf("Quantos números? \n");

    int n;
    scanf("%d", &n);
    int *px = malloc(n*sizeof(int));

    for(int i =0; i<n;i++){
        scanf("%d",px+i);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (px[j] > px[j + 1]) {
                trocar(&px[j], &px[j + 1]);
                printf("%d %d \n",px[j], px[j+1]);
            }
        }
    }

    for(int i =0; i<n;i++){
        printf("%d ",*(px+i));
    }

    free(px);
}