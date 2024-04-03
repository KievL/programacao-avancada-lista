/*
9. Qual será a saída do seguinte programa
*/

#include <stdio.h>

struct teste{
    int x = 3;
    char nome[] = "jose";
};

int main(){
    struct teste *s;
    printf("%d", s->x);
    printf("%s", s->name);
}

//Não compila, pois os valores de teste são inicializados da forma errada e não existe a propriedade name.