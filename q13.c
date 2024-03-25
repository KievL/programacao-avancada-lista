//Memory leak é a não liberação do espaço da memória depois de uma alocação. Se existe alguma situação em que a memória deixe de ser liberada,
//então ocorre o memory leak e, assim, o espaço de memória fica bloqueado e pode causar problemas de desempenho e até contribuir para esgotar a memória
//disponível no pc. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, *y, *z;
    //exempĺo 1 (simples falta de um free):
    x = malloc(10*sizeof(int));

    return 0 ;

    //exemplo2 (free em apenas alguns casos da estrutura de decisão):
    y = malloc(10*sizeof(int));
    int j;
    scanf("%d", &j);
    if(j>10){
        free(y);
    }
    else{
        printf("não liberou aqui");
    }

    return 0;

    //exemplo3 (encontra um break num laço):
    while(1){
        z = malloc(10*sizeof(int));
        for(int i =0; i<10; i++){
            scanf("%d", z+i);
        }
        if(z[0]>0){
            break;
        }
        free(z);

    }
}