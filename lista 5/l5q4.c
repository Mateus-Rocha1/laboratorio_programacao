#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define TAM 5
void somarElementos(float *,float *);
void popularVetor(float *);
int main(){
    float vetor[TAM];
    float *p;
    p = vetor;
    float soma=0;
    float *psoma =&soma;
    popularVetor(p);
    somarElementos(p,psoma);
}
void popularVetor(float *p){
    for(int i=0;i<TAM;i++){
        *(p+i) = rand() % 100;
    }
}
void somarElementos(float *p,float *soma){
    for(int i=0;i<TAM;i++){
        *soma += *(p+i);
    }
    printf("a soma dos elementos é: %.1f\n",*soma);
}