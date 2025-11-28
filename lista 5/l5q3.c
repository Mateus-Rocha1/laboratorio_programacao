
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
void popularVetor(int *);
void capturarMenorMaior(int *,int *,int *);
void normalizarDados(float *,int * ,int *,int *);
void mostrarVetorFloat(float *);
void mostrarVetorInt(int *);
int main(){
    srand(time(NULL));
    int vetor[TAM];
    float vetorLinha[TAM];
    int *p;
    float *pLinha;
    p = vetor;
    pLinha = vetorLinha;
    popularVetor(p);
    int maior = *p,menor=*p;
    int *pMaior = &maior,*pMenor = &menor;
    capturarMenorMaior(pMaior,pMenor,p);
    normalizarDados(pLinha,p,pMaior,pMenor);
    puts("vetor original:");
    mostrarVetorInt(p);
    puts("vtor normalizado:");
    mostrarVetorFloat(pLinha);
    return 0;
}
void popularVetor(int *p){
    for(int i =0;i<TAM;i++){
        *(p+i) = rand() % 100;
    }
}
void capturarMenorMaior(int *maior,int *menor,int *vetor){
    for(int i = 0;i<TAM;i++){
        if(*(vetor +i)> *maior){
            *maior = *(vetor + i);
        }
        if(*(vetor +i)< *menor){
            *menor = *(vetor + i);
        }
    }
}
void normalizarDados(float *normalizado,int * vPrincipal,int *menor,int *maior){
    for(int i = 0;i<TAM;i++){
        *(normalizado+i) = (float)((*(vPrincipal+i) - *menor)) / ((float)((*maior - *menor)));
    }
}
void mostrarVetorFloat(float *vetor){
    for(int i=0;i<TAM;i++){
        printf("%f\t",*(vetor+i));
        
    }
    puts("\n");
}
void mostrarVetorInt(int *vetor){
    for(int i=0;i<TAM;i++){
        printf("%d\t",*(vetor+i));
        
    }
    puts("\n");
}