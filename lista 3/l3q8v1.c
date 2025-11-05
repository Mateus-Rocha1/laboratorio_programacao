#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10
int main(){
    int a,b,carry;
    int vetor[TAM];
    srand(time(NULL));
    puts("defina o inicio do intervalo:");
    scanf("%d",&a);
    puts("defina o fim do intervalo:");
    scanf("%d",&b);
    for(int i =0;i<TAM;i++){
        vetor[i] = (rand() % (b - a + 1)) + a; 
    }
    for(int j=0;j<TAM-1;j++){
        for(int i=0;i<TAM-1-j;i++){
            if(vetor[i]>vetor[i+1]){
                carry = vetor[i];
                vetor[i] =vetor[i+1];
                vetor[i+1]=carry;
            }
        }
    }
    puts("o vetor ordenado é:");
    for(int i=0;i<TAM;i++){
        printf("%d\n",vetor[i]);
    }
    return 0;
}