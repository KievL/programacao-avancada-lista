/*
12. Suponha que as seguintes declarações tenham sido realizadas:
5float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido:
aloha[2] = value;
scanf("%f", &aloha);
aloha = "value";
printf("%f", aloha);
coisas[4][4] = aloha[3];
coisas[5] = aloha;
pf = value;
pf = aloha;
*/

#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value; //válido.
    scanf("%f", &aloha); //dá warning na compilação, mas atribui o valor ao primeiro elemento de aloha
    //aloha = "value"; // não é possível atribuir uma string a um ponteiro para float.
    printf("%f\n", aloha); // printa o endereço do primeiro elemento de aloha, mas dá warning pelo tipos envolvidos. (double e ponteiro pra float)    
    coisas[4][4] = aloha[3]; //tudo certo.
    //coisas[5] = aloha; //erro, pois está sendo tentato atribuir um valor a um array.
    //pf = value; // erro pois está sendo tentado atribuir um float a um ponteiro para float.
    pf = aloha; //válido.

    printf("%p\n", aloha);
    printf("%p\n", &aloha);    
}