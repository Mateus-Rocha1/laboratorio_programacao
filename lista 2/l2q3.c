#include <stdio.h>
int main(){
    int f;
    int fat = 1;
    puts("insira um numero inteiro e positivo:");
    scanf("%d",&f);
    for(int i = 1; i <= f;i++){
        fat = fat * i;
    }
    printf("o fatorial desse numero e:%d",fat);
    return 0;
}
