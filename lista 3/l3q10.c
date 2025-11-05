#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 3
int main(){
    int i,j,x,contador;
    int matriz[TAM][TAM];
    srand(time(NULL));
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j]=rand()%100;
            printf("%d\n",matriz[i][j]);
        }
    }
    puts("insira um numero pra procurar na matriz");
    scanf("%d",&x);
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(matriz[i][j]==x){
                contador ++;
            }
        }
    }
    printf("o algorismo '%d' aparece '%d' vezes na matriz",x,contador);
    return 0;
}