#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int soma=0,tamanho,maior =0;
    puts("escolha o tamanho do vetor:");
    scanf("%d",&tamanho);
    int *p;
    p =malloc(sizeof(int)*tamanho);
    for(int i=0;i<tamanho;i++){
        *(p+i)=rand() %100;
        soma += *(p+i);
        if(maior < *(p+i)){
            maior = *(p+i);
        }
    }
    float media = (float)(soma)/tamanho;
    int carry;
    for(int i =0;i<tamanho;i++){
        for(int j=0;j<tamanho-i-1;j++){
            if(*(p+j+1)<*(p+j)){
                carry = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = carry;
            }
        }
    }
    float mediana;
    if(tamanho % 2 == 0){
        mediana = ((*(p +(tamanho/2)))+ (*(p +(tamanho/2 -1))))/2;
    }else{
        mediana = *(p + (tamanho/2 +1));
    }
    int *contador = malloc(sizeof(int) * tamanho);
    for(int i=0;i<tamanho;i++){
        *(contador+i) = 1;
    }

    int moda = *p;
    int maxCount = 1;

    for(int i=0;i<tamanho;i++){
        int count = 1;
        for(int j=i+1;j<tamanho;j++){
            if(*(p+i) == *(p+j)){
            count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            moda = *(p+i);
        }
    }
    printf("a média é:%.1f\n a moda é:%d\n a mediana é:%.1f\n",media,moda,mediana);
    free(p);
    return 0;
}