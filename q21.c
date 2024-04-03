/*21. (ENADE, 2023) Memory leak, ou vazamento de memória, é um problema que ocorre em
sistemas computacionais quando uma parte da memória, alocada para uma determinada
operação, não é liberada quando se torna desnecessária. Na linguagem C, esse tipo de problema
é quase sempre relacionado ao uso incorreto das funções malloc( ) e free( ). Esse erro de
programação pode levar a falhas no sistema se a memória for completamente consumida. Um
dos trechos abaixo apresenta um vazamento de memória. Identifique-o e justifique sua
resposta.*/

//OK. Aloca a memória e libera em seguida.
A void f( ){
    void *s;
    s = malloc(50);//aloca
    free(s); //libera
}

//OK. Não faz alocação nenhuma.
B int f( ){
    float *a;
    return 0;
}

//Errado. Caso size>50, a função é finalizada e não passa pelo free(s).
C int f(char *data){
    void *s;
    s = malloc(50);
    int size = strlen(data);
    if (size > 50)
        return(-1);//Finaliza a função
    free(s);
    return 0;
}

//Ok. A memória e alocada e liberada na main.
D int *f(int n){
    int *num = malloc(sizeof(int)*n);//aloca
    return num;
}
int main(void){
    int *num;
    num = f(10);
    free(num);//libera.
    return 0;
}

//Tem um double free, mas não há vazamento.
E void f(int n){
    char *m = malloc(10);//aloca
    char *n = malloc(10);//aloca
    free(m);//libera m.
    m = n;//m recebe n.
    free(m);//libera a memória que resta.
    free(n); //double free.
}