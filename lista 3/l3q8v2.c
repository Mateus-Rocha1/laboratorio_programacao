#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10
int main(){
    int a,b,carry,i,j;
    int vetor[TAM];
    srand(time(NULL));
    puts("defina o inicio do intervalo:");
    scanf("%d",&a);
    puts("defina o fim do intervalo:");
    scanf("%d",&b);
    for( i =0;i<TAM;i++){
        vetor[i] = (rand() % (b - a + 1)) + a; 
    }
    for( j=0;j<TAM-1;j++){
        int indicemenor = j;
        for(i=j+1;i<TAM;i++){
            if(vetor[i]<vetor[indicemenor]){
                indicemenor = i;
            }
        }
        carry=vetor[j];
        vetor[j]=vetor[indicemenor];
        vetor[indicemenor]=carry;
    }
    puts("o vetor ordenado é:");
    for(i=0;i<TAM;i++){
        printf("%d ",vetor[i]);
    }
    return 0;
}