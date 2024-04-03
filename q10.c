/*
10. Qual será a saída do seguinte programa
*/

#include <stdio.h>

void main(){
    int const *x = 3; //atribuindo um int para um ponteiro para int. provavelmente não poderá ser executado.
    printf("%d", ++(*x));//erro de compilação pois *x é readonly.
}