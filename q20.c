#include <stdio.h>
#include <stdlib.h>


void multiplica_matrizes(int **a, int **b, int **c, int la, int ca, int cb){
    for(int col =0;col<cb;col++){
        for(int lin=0;lin<la;lin++){
            for (int z=0;z<ca;z++){
                *(*(c+lin)+col)+=(*(*(a+lin)+z)*(*(*(b+z)+col)));
            }
        }
    }
}

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

    int **a;
    a = malloc(la*sizeof(int *));
    a[0] = malloc(la*ca*sizeof(int));

    for(int i =1; i<la;i++){
        a[i]=a[i-1]+ca;
    }

    for(int i =0 ; i<la;i++){
        for(int j = 0; j<ca;j++){
            printf("A[%d][%d]: ", i+1,j+1);
            scanf("%d", (*(a+i)+j));
        }
    }

    int **b;
    b = malloc(lb*sizeof(int *));
    b[0] = malloc(lb*cb*sizeof(int));

    for(int i =1; i<lb;i++){
        b[i]=b[i-1]+cb;
    }
    
    for(int i =0 ; i<lb;i++){
        for(int j = 0; j<cb;j++){
            printf("B[%d][%d]: ", i+1,j+1);
            scanf("%d", (*(b+i)+j));
        }
    }
    
    int **c;
    c = malloc(la*sizeof(int *));
    c[0] = malloc(la*cb*sizeof(int));

    for(int i =1; i<la;i++){
        c[i]=c[i-1]+cb;
    }
    
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
    multiplica_matrizes(a,b,c,la,ca,cb);
    printar_matriz(c, la, cb);

    free(c[0]);
    free(c);
    free(b[0]);
    free(b);
    free(a[0]);
    free(a);
}