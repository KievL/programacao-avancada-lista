#include <stdio.h>

int main(){
    int vet[] = {1,2,3};
    int i;

    for(i=0;i<3;i++){
        printf("%d ", *(vet+i));
    }

    for(i=0;i<3;i++){
        printf("%X ", (vet+i));
    }
}