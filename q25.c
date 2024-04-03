#include <stdio.h>
#include <stdlib.h>

void printar_camada(int *** matriz, int linhas, int colunas, int z_desejado){
    printf("---Z = %d---\n", z_desejado+1);
    for(int i =0; i<linhas; i++){
        for (int j=0; j<colunas ;j++){
            printf("%d ",matriz[i][j][z_desejado]);
        }
        printf("\n");
    }
}

void modificar_estado(int *** matriz, int linha, int coluna, int camada, int estado_desejado){
    matriz[linha][coluna][camada]=estado_desejado;
}

void main(){
    int ***m;
    int x,y,z;

    //x é o número de linhas, y é o número de colunas e z é o número de camadas da profundidade.
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    printf("Z: ");
    scanf("%d", &z);

    m = malloc(x*sizeof(int **));

    m[0] = malloc(x*y*sizeof(int *));

    m[0][0] = malloc(x*y*z*sizeof(int));

    for (int i = 0;i<x;i++){
        m[i] = m[0] + y*i;   

        for(int j = 0;j<y;j++){
            m[i][j]=m[0][0] + i*(y*z) + j*(z);
        }             
    }

    while (1){
        printf("O que deseja fazer? \n1. Modificar estado.\n2. Printar camada.\n3. Parar.\n");
        unsigned char opcao;
        scanf("%hhd", &opcao);

        if(opcao==1){
            unsigned char linha;
            unsigned char coluna;
            unsigned char camada;
            unsigned char estado;
            printf("Qual linha? ");
            scanf("%hhd", &linha);
            printf("Qual coluna? ");
            scanf("%hhd", &coluna);
            printf("Qual camada? ");
            scanf("%hhd", &camada);
            printf("Qual estado? ");
            scanf("%hhd", &estado);
            modificar_estado(m,linha-1,coluna-1,camada-1,estado);

            printf("Estado modificado. \n");
            continue;
        }else if (opcao==2){
            unsigned char camada;

            printf("Qual camada deseja printar? ");
            scanf("%hhd", &camada);

            printar_camada(m,x,y,camada-1) ;
            continue;
        }else{
            break;
        }
    }    

    free(m[0][0]);
    free(m[0]);
    free(m);
}