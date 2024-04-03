/*15. Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.*/

#include <stdio.h>
#include <stdlib.h>

//função para troca os valores dos ponteiros
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

    //pelo método da bola vai iterando por todo o resto da array a partir de cada elemento,
    //vai fazendo a comparação e vai trocando a ordem dos elementos para deixar tudo em ordem crescente.
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