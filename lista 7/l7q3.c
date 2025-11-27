#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
typedef struct AnaliseVetor{
    int *pMatriz;
    int quantidadeElementos;
    float media;
}AnaliseVetor;
int main(){
    srand(time(NULL));
    AnaliseVetor analisador;
    int matriz[TAM][TAM];
    analisador.pMatriz = (int*)matriz;
    int soma =0;
    analisador.quantidadeElementos = 0;
    for(int i =0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            *(analisador.pMatriz+(i*TAM+j)) = rand() % 100;
            soma += *(analisador.pMatriz+(i*TAM+j));
            analisador.quantidadeElementos += 1;
        }
    }
    analisador.media = (float)(soma / analisador.quantidadeElementos);
    puts("matriz:");
    puts("--------------------");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("%4d",*(analisador.pMatriz+(i*TAM+j)));
        }
        puts("\n");
    }
    puts("--------------------");
    printf("quantidade de elementos: %d \n media dos elemenstos: %.1f\n",analisador.quantidadeElementos,analisador.media);
}