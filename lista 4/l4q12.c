#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4 
#define TAM 10
int main(){
    srand(time(NULL));
    int x[TAM],y[TAM],r;
    int *px,*py;
    px = x;
    py = y;
    for(int i=0;i<TAM;i++){
        r = rand() % 11;
        *(px+i) = rand() % N;
        switch(r){
        case(0):case(1):case(2):case(3):*(py+i) = *(px+i);break; 
        case(4):case(5):*(py+i) = *(px+i) - 1; break;
        case(6):case(7):*(py+i) = *(px+i) + 1; break;
        case(8):case(9):*(py+i) = *(px+i) - 2;break; 
        case(10):*(py+i) = *(px+i) + 2;break;
        default:break; 
        }
        if(*(py+i)<0){
            *(py+i) = 0;
        }
        if(*py+i > (N - 1)){
            *(py+i) = (N - 1);
        }
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