#include <stdio.h>
int main(){
    int n;
    puts("digite um numero:");
    scanf("%d",&n);
    printf("o número digitado é %s",(n%2==0)?"par":"impar");
    return 0;
}