#include<stdio.h>
int main(){
    float X;
    puts("escreva o valor da conta: ");
    scanf("%f",&X);
    printf("o valor a ser pago incluindo o adicional do garcom e: %.1f\n",X*(110.0/100));
    return 0;
}