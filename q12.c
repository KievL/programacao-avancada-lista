#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    //aloha = "value";
    printf("%f\n", aloha);
    coisas[4][4] = aloha[3];
    //coisas[5] = aloha;
    //pf = value;
    pf = aloha;

    printf("%p\n", aloha);
    printf("%p\n", &aloha);

    for(int i =0; i<10; i++){
        printf("%.1f ",*(pf+i)); printf("\n");
    }
}