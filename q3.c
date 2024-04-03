/*
3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
atribuição são ilegais? Justifique.
*/

#include <stdio.h>

int main(){
    //atribuindo valores para teste
    int i =2, j=8, k;
    int *p, *q;

    //Válida
    p=&i;
    printf("%d \n", *p);

    //Inválido, pois está atribuindo ao conteúdo de q o endereço de j.
    //*q = &j;
    //printf("%d %d \n", *p, **&q);

    //Válida
    p = &*&i;
    printf("%d \n", *p);

    //Inválido, pois após o & deve vir a variável. 
    i = (*&)j;
    printf("%d \n", i);

    //Válido.
    i = *&*&j;
    printf("%d \n", i);

    //Válido
    q = &j;
    printf("%p \n", q);

    //Válido
    k = (*p++) + *q;
    printf("%d %d %d \n", k, i,*p);

}