#include <stdio.h>

int main(){
    int mat[4]={1,2,3,4}, *p, x;

    x = (*mat);

    printf("%d %d \n", x, *mat);
}