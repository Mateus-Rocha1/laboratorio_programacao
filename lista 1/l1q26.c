#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    puts("insira um numero em ponto flutuante:");
    scanf("%f",&a);
    puts("insira outro numero em ponto flutuante:");
    scanf("%f",&b);
    puts("insira outro numero em ponto flutuante:");
    scanf("%f",&c);
    printf("a media aritmetica desses tres pontos é %.1f e a geometrica é %.1f",((a+b+c)/3),pow(a * b * c, 1.0/3.0));
    return 0;
}