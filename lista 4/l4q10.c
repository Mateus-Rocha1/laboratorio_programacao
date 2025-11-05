#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 5
int main(){
    srand(time(NULL));
    int n,vetorx[TAM];
    int *px,*pcont;
    puts("escolha o fim do intervalo do vetor:");
    scanf("%d",&n);
    puts("----");
    for(px=vetorx;(px-vetorx)<TAM;px++){
        *px=rand()%n;
    }
    int vetorcont[n+1];
    for(pcont=vetorcont;(pcont-vetorcont)<n+1;pcont++){
        *pcont = 0;
    }
    for (px=vetorx; (px-vetorx) < TAM; px++) {
        vetorcont[*px]++;
    }
    for(px=vetorx;(px-vetorx)<TAM;px++){
        printf("%d\n",*px);
    }
    puts("------");
    for(pcont=vetorcont;(pcont-vetorcont)<n+1;pcont++){
        printf("%d\n",*pcont);
    }
    return 0;
}
//criar um vetor contador e usar o vetor um de indice pro segundo na ghora de fazer o incremento e as contagens