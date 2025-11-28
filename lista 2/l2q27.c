#include <stdio.h>
int main(){
    int maior,menor,numero;
    puts("insira um número inteiro");
    scanf("%d",&numero);
    maior = numero;
    menor = numero;
    while(!((numero<0) && (numero%2 ==0))){
        if(numero>maior){
            maior = numero;
        }
        if(numero<menor){
            menor = numero;
        }
        puts("insira um número inteiro");
        scanf("%d",&numero);
    }
    printf("o produto do maior pelo menor é %d\n",(maior*menor));
    return 0;
}