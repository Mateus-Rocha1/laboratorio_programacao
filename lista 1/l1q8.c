#include <stdio.h>
int main(){
    int X;
    puts("insira um valor inteiro:");
    scanf("%d",&X);
    printf("o sucessor de %d é %d e seu antecessor é %d\n",X,X+1,X-1);
    return 0;
}