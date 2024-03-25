#include <stdio.h>

int main(){
    char x1[4];
    printf("CHAR: \n");
    for(int i =0; i<4;i++){
        printf("x1[%d]: %X\n", i,x1+i);
    }

    int x2[4];
    printf("\nINT: \n");
    for(int i =0; i<4;i++){
        printf("x2[%d]: %X\n", i,x2+i);
    }

    float x3[4];
    printf("\nFLOAT: \n");
    for(int i =0; i<4;i++){
        printf("x3[%d]: %X\n", i,x3+i);
    }

    double x4[4];
    printf("\nDOUBLE: \n");
    for(int i =0; i<4;i++){
        printf("x4[%d]: %X\n", i,x4+i);
    }
    
}