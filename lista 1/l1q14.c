#include <stdio.h>
int main(){
    int dias;
    float Sbruto,Sliquido;
    puts("quantos dias foram trabalhados?");
    scanf("%d",&dias);
    Sbruto = (dias * 50.25)*0.9;
    if(dias>20){
        Sliquido = 1.3*(Sbruto);
    }else if(dias>10){
        Sliquido = 1.2*(Sbruto);
    }else{
        Sliquido = Sbruto;
    }
    printf("o salario liquido a ser recebido é: %.2f",Sliquido);
    return 0;
}
