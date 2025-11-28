#include <stdio.h>
int main(){
    int A,B;
    puts("selecione o começo da faixa:");
    scanf("%d",&A);
    puts("selecione o fim da faixa:");
    scanf("%d",&B);
    if(A<B){
        for(int i = A;i<=B;i++){
            if(i%4==0){
                printf("o quadrado de %d é %d",i,(i*i));
            }
        }
    }else{
        for(int i = A;i>=B;i--){
            if(i%4==0){
                printf("o quadrado de %d é %d",i,(i*i));
            }
        }
    }
}