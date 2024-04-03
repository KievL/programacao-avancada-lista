/*
5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e explique se
foram obtidas as respostas esperadas).
*/

#include <stdio.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for(i = 0 ; i <= 4 ; i++){
        printf("i = %d",i); //printa o i do for.
        printf(" vet[%d] = %.1f",i, vet[i]); // printa o elemento da casa i com 1 casa decimal.
        printf(" *(f + %d) = %.1f",i, *(f+i)); //printa a mesma coisa do de cima, já que f inicialmente aponta para vet
        printf(" &vet[%d] = %p",i, &vet[i]); // printa o endereço de cada elemento do vetor.
        printf(" (f + %d) = %p",i, f+i); // mesma coisa do de cima.
        printf("\n");
    }
}