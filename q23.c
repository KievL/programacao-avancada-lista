/*
23. (ENADE, 2021) Observe o código abaixo escrito na linguagem C.
*/

#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
    int i;
    //estratégia iterativa.
    for (i = 0; i < TAM; i++){
        if (vetor[i] == v)
            return i;
    }
    return -1;
}
int funcao2(int vetor[], int v, int i, int f){
    //como m é int, aqui as casas decimais serão desprezadas.
    int m = (i + f) / 2;
    if (v == vetor[m])
        return m;
    if (i >= f)
        return -1;
    //esta opção é recursiva, não iterativa.
    if (v > vetor[m])
        return funcao2(vetor, v, m+1, f);//aqui há um ajuste de m+1
    else
        return funcao2(vetor, v, i, m-1);//aqui há um ajuste de m-1.
}
int main(){
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    //realmente printa 7 - 7.
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
    return 0;
}

/*
A respeito das funções implementadas, avalie as afirmações a seguir.
I. O resultado da impressão na linha 24 é: 7 - 7.
II. A função funcao1, no pior caso, é uma estratégia mais rápida do que a funcao2.
III. A função funcao2 implementa uma estratégia iterativa na concepção do algoritmo.
É correto o que se afirma em:

IV. I, apenas. CORRETA.
V. III, apenas.
VI. I e II, apenas.
VII. II e III, apenas.
VIII. I, II e III.

Justifique sua resposta.

I. O resultado realemente é 7 - 7.
II. A funcao2 faz um ajuste para convergir mais rápido. Já o for é obrigado a passar por toda a array no pior caso.
III.  a função2 é recursiva. a função1 que é iterativa.
*/