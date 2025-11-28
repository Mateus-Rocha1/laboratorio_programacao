#include <stdio.h>
int main(){
    int divisor=1,tamanho,termo = 1;
    float pi=0;
    puts("deseja aproximar pi até quantos termos da série?");
    scanf("%d",&tamanho);
    for(int i=0;i<tamanho;i++){
        if(termo%2 ==0){
            pi -= (4.0/divisor);
        }else{
            pi += (4.0/divisor);
        }
        divisor += 2;
        termo ++;
    }
    printf("o valor de pi aproximado para essa quantidade de termos é %.1f\n",pi);
}