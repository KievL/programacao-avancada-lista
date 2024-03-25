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