/*
8. O que fazem os seguintes programas em C?
*/

#include <stdio.h>

int main(){
    int vet[] = {1,2,3};
    int i;

    //PRINTA OS VALORES DOS ELEMENTOS DE VET
    for(i=0;i<3;i++){
        printf("%d ", *(vet+i));
    }

    //PRINTA OS ENDEREÇOS DOS ELEMENTOS DE VET
    for(i=0;i<3;i++){
        printf("%X ", (vet+i));
    }
}