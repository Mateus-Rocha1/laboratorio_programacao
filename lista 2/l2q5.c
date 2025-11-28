#include<stdio.h>
int main(){
    int N;
    puts("digite um numero(0 para encerrar):");
    scanf("%d",&N);
    int maior=N,menor=N;
    while(N!=0){
        if(N>maior){
            maior = N;
        }
        if (N<menor){
            menor= N;
        }
        puts("digite um numero(0 para encerrar):");
        scanf("%d",&N);  
    }
    printf("o maior termo fornecido foi %d e o menor foi %d",maior,menor);
    return 0;
}