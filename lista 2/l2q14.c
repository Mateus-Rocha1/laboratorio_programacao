#include<stdio.h>
int main(){
    int A,B;
    int tot = 0;
    puts("insira o inicio do laco:");
    scanf("%d",&A);
    puts("insira o fim do laco:");
    scanf("%d",&B);
    if(A<B){
        for(int i = A;i<=B;i++){
            if(i%3==0){
                tot+=1;
            }
        }
    }else{
        for(int i = A;i>=B;i--){
            if(i%3==0){
                tot+=1;
            }
        }        
    }
    printf("o total de numeros divisiveis por 3 nesse intervalo é %d",tot);
    return 0;
}