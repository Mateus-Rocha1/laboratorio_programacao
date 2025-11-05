#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5
int main(){
    int vetor[TAM],carry;
    int *p;
    srand(time(NULL));
    for(p=vetor;(p-vetor)<TAM;p++){
        *p=rand()%100;
    }
    for(int i = 0;i<TAM-1;i++){
        for(p=vetor;(p-vetor)<TAM-1-i;p++){
            if(*p>*(p+1)){
                carry=*p;
                *p=*(p+1);
                *(p+1)=carry;
            }
        }
    }
    puts("vetor ordenado:");
    for(p=vetor;(p-vetor)<TAM;p++){
        printf("%d\n",*p);
    }
    return 0;
}