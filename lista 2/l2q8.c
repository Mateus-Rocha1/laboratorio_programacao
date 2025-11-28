#include <stdio.h>
int main(){
    float valor,entrada;
    int prest;
    puts("digite o valor:");
    scanf("%f",&valor);
    prest = (int) valor/2;
    entrada = valor - 2* prest;
    printf("o valor de cada presrtacao é:%d e o valor de entrada é:%.1f",prest,entrada);
    return 0;
}