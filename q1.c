#include <stdio.h>

int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("p == &i ; output: %d \n", p==&i);
    
    printf("*p - *q ; output: %d \n", *p - *q);

    printf("**&p ; output: %d \n", **&p);
    
    printf("3 - *p/(*q) + 7 ; output: %d \n", 3 - *p/(*q) + 7); 
}