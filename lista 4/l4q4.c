#include <stdio.h>
int main(){
    int x;
    puts("escolha o tamanho do vetor:");
    scanf("%d",&x);
    int vetor[x];
    int *p = vetor;
    for (int i=0;i<x;i++){
        printf("insira o valor do vetor na posição %d\n",i);
        scanf("%d",p+i);
    }
    for(int i=0;i<x;i++){
        printf("valor da posição %d:%d endereço:[%p]\n",i,*(p+i),p+i);
    }
    return 0;
}
