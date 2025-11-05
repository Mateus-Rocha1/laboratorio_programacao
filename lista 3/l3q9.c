#include <stdio.h>
#define TAM 3
int main(){
    int matriz[TAM][TAM];
    int i,j;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("insira o valor da posição [%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(i==j){
                printf("%d",matriz[i][j]);
            }
        }
    }
    return 0;
}