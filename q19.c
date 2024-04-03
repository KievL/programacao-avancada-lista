#include <stdio.h>

void soma_vetores(int *a, int *b, int *c, int tam){
    for(int i =0; i<tam; i++){
        *(c+i) = *(a+i) + *(b+i);
    }
}

int main(){
    int l1[4], l2[4], l3[4];

    for(int i =0; i<4; i++){
        l1[i]=i;
        l2[i]=i*3;
    }

    soma_vetores(l1, l2 , l3, 4);

    for(int i = 0; i<4; i++){
        printf("%d ",*(l3+i)); 
    }
    
    printf("\n");
    return 0;
}