#include <stdio.h>
int main(){
    float A,B;
    puts("digite o primeiro valor:");
    scanf("%f",&A);
    puts("digite o segundo valor:");
    scanf("%f",&B);
    if(B!=0){
        printf("o resultado da divisão é:%.1f",(A/B));
    }else{
        do{
            puts("o valor do segundo valor não pode ser zero,digite outro");
            scanf("%f",&B);
        }while(B==0);
        printf("o resultado da divisão é:%.1f",(A/B)); 
    }
    return 0;
}
