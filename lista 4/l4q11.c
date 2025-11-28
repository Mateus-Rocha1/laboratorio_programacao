#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4 
#define TAM 10
int main(){
    srand(time(NULL));
    int x[TAM],y[TAM];
    int *px,*py;
    px = x;
    py = y;
    for(int i=0;i<TAM;i++){
        *(px+i) = rand() % N;
        *(py+i) = rand() % N;
    }
    int m[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
             m[i][j] = 0;
        }
    }
    int *contador;
    contador = (int *)m;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int c=0;c<TAM;c++){
                if(*(px+c)== i && *(py + c) == j){
                    *(contador+(i*N+j)) += 1;
                } 
            }
        }
    }
    puts("\n vetor x:");
    for(int i = 0;i<TAM;i++){
        printf("%d ",*(px+i));
    }
    puts("\n vetor y:");
    for(int i = 0;i<TAM;i++){
        printf("%d ",*(py+i));
    }
    puts("\n matriz m");
    for(int i =0;i<N;i++){
        for(int j = 0;j<N;j++){
            printf("%4d",*(contador +(i*N+j)));
        }
        puts("\n");
    }
    return 0;
}