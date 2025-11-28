#include <stdio.h>
int main(){
    int A,B;
    int soma = 0;
    puts("escolha o inicio do somatorio");
    scanf("%d",&A);
    puts("escolha o fim do somatorio");
    scanf("%d",&B);
    if(A<B){
        for(int i = A;i<=B;i++){
            if(i%2==0){
                soma += i;
            }
        }
    }else{
        for(int i = A;i>=B;i--){
            if(i%2==0){
                soma += i;
            }
        }
    }
    printf("o resultado da soma dos numeros pares desse intervalo é:%d",soma);
}