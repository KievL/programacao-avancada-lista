#include <stdio.h>

int main(){
    int i =2, j=8, k;
    int *p, *q;

    p=&i;
    printf("%d \n", *p);

    //*q = &j;
    //printf("%d %d \n", *p, **&q);

    p = &*&i;
    printf("%d \n", *p);

    //i = *&*&j;
    printf("%d \n", i);


    q = &j;
    printf("%p \n", q);

    k = (*p++) + *q;
    printf("%d %d %d \n", k, i,*p);

}