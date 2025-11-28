#include <stdio.h>
int main(){
    int X;
    puts("insira um valor: ");
    scanf("%d",&X );

    printf("o triplo de %d é: %d\n",X,3*X);
    printf("o quadrado de %d é: %d\n",X,X*X);
    printf("o meio de %d é: %.1f\n",X,X/2.0);
    return 0;
}