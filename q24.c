#include <stdio.h>

void main(){
    unsigned long estado= 2577565;

    unsigned char m[8][8];

    for(int i =63; i>=0;i--){
        unsigned char x = estado & 1;
        estado = estado >> 1;
        int pos1 = i/8;
        int pos2 = i%8;
        m[pos1][pos2] = x;
    }

    for(int i =0;i<8;i++){
        for(int j = 0; j< 8; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

}