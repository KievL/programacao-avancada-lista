/*
22. (ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
cada um os bits possui um significado diferente,  sendo necessário manipulá-los
individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
como dos operadores tilizados para realizar operações binárias nas linguagens de programação,
é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
variáveis inteiras. Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa?
*/

#include <stdio.h>


int main(){
    int a, b; // a = 10; b = 1;
    int x, y, z;
    scanf("%d %d", &a, &b);
    x = a; y = b; z = a + b; // x= 10; y = 1; z = 11;
    while (a) {
        x = x | b; // x = 00001010; b = 00000001 => x | b = 00001011 => x=11
        y = y ^ a; // a = 00001010; y = 00000001 => y ^ a = 00001011 => y = 11 
        z = z & (a+b); // a+b = 00001011; z = 00001011 => z & (a+b) = 00001011
        a = a >> 1; // a = 00001010; => a>>1 = 00000101;
        b = b << 1; // b = 00000001; => b>>1 = 00000010;
        
    }
    printf ("%d %d %d\n", x, y, z); // 00001011 00001011 00001011
    return 0;
}

/*
it1: 
    while (a) {
        x = x | b; // x = 00001010; b = 00000001 => x | b = 00001011 => x=11
        y = y ^ a; // a = 00001010; y = 00000001 => y ^ a = 00001011 => y = 11 
        z = z & (a+b); // a+b = 00001011; z = 00001011 => z & (a+b) = 00001011 = 11
        a = a >> 1; // a = 00001010; => a>>1 = 00000101;
        b = b << 1; // b = 00000001; => b<<1 = 00000010;
    }
    printf ("%d %d %d\n", x, y, z); // 00001011 00001011 00001011

it2:
    while (a) {
        x = x | b; // x = 00001011; b = 00000010 => x | b = 00001011 => x=11
        y = y ^ a; // a = 00000101; y = 00001011 => y ^ a = 00001110 => y = 14 
        z = z & (a+b); // a+b = 00000111; z = 00001011 => z & (a+b) = 00000011 = 3
        a = a >> 1; // a = 00000101; => a>>1 = 00000010;
        b = b << 1; // b = 00000010; => b>>1 = 00000100;
    }
    printf ("%d %d %d\n", x, y, z); // 00001011 00001110 00000011

it3:
    while (a) {
        x = x | b; // x = 00001011; b = 00000100 => x | b = 00001111 => x=15
        y = y ^ a; // a = 00000010; y = 00001110 => y ^ a = 00001100 => y = 12
        z = z & (a+b); // a+b = 00000110; z = 00000011 => z & (a+b) = 00000010 = 2
        a = a >> 1; // a = 00000101; => a>>1 = 00000001;
        b = b << 1; // b = 00000010; => b>>1 = 00001000;
    }
    printf ("%d %d %d\n", x, y, z); // 00001111 00001100 00000010

it4:
    while (a) {
        x = x | b; // x = 00001111; b = 00001000 => x | b = 00001111 => x=15
        y = y ^ a; // a = 00000001; y = 00001100 => y ^ a = 00001101 => y = 13
        z = z & (a+b); // a+b = 00001001; z = 00000010 => z & (a+b) = 00000000 = 0
        a = a >> 1; // a = 00000101; => a>>1 = 00000000;
        b = b << 1; // b = 00000010; => b>>1 = 00010000;
    }
    printf ("%d %d %d\n", x, y, z); // 00001111  00001101 00000000

fim pois a =0;
output: 15 13 0
*/