/*2. Mostre o que será impresso por programa supondo que a variável i ocupa o endereço 4094 na
memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho.*/

#include <stdio.h>

int main(){
    int i=5, *p;
    p = &i;
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}

//Output: 
//4094 4096 7 5 15 9

//4096 pois é 4094 + 2, já que 2 é o tamanho em bytes do inteiro.
//As outras operações são operações com o conteúdo de p.