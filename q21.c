#include <stdio.h>
#include <stdlib.h>

int *f(int n){
    int *num = malloc(sizeof(int)*n);
    return num;
}

void main(){
    int *num;
    num = f(10);
    free(num);
}