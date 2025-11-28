#include <stdio.h>
int main(){
    int a,b;
    puts("insira um numero:");
    scanf("%d",&a);
    puts("insira um segundo numero:");
    scanf("%d",&b);
    printf("o primeiro numero %s\n",(a%b == 0)?("é multiplo do segundo"):("nao é mutiplo do segundo"));
    return 0;
}