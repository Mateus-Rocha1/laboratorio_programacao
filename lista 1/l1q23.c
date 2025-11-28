#include <stdio.h>
int main(){
    int x,n;
    puts("insira o primeiro fator");
    scanf("%d",&x);
    puts("qnts vezes o 2 será elevado?");
    scanf("%d",&n);
    printf("o resultado do produto é %d",x<<n);
    return 0;
}