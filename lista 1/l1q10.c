#include <stdio.h>
int main(){
    float cotD,qntR,vf;
    puts("qual a cotação do dolar?");
    scanf("%f",&cotD);
    puts("quantos reais vao ser convertidos?");
    scanf("%f",&qntR);
    vf = qntR / cotD;
    printf("o valor em dolar referente a %f reais é atualmente: %.2f\n",qntR,vf);
    return 0;
}

