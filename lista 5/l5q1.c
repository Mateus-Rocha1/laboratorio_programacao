#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10
int main(){
    srand(time(NULL));
    int vetor[TAM];
    int *p;
    for(p=vetor;(p-vetor)<TAM;p++){
        *p = rand()%20;
    }
    puts("vetor completo:");
    for(p=vetor;(p-vetor)<TAM;p++){
        printf("%d\t",*p);
    }
    int *endereço,valor;
    for(p=vetor;(p-vetor)<TAM;p++){
        if(*p%2==0){
            endereço = p;
            valor = *p;
            break;
        }
    }
    printf("o endereço do primeiro termo par(%d) desse vetor é [%p]\n",valor,endereço);
    return 0;
}
