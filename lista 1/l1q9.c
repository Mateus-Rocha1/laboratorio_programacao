#include <stdio.h>
int main(){
    float v,c,l,h;
    puts("insira o comprimento,a largura e a altura da caixa retangular no formato c,l,h:");
    scanf("%f,%f,%f",&c,&l,&h);
    v = c*l*h;
    printf("o volume desse objeto é: %.1f\n",v);
    return 0;
}