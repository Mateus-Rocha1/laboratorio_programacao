#include <stdio.h>
int main(){
    int a,b,soma = 0;
    puts("defina o inicio do intervalo:");
    scanf("%d",&a);
    puts("defina o final do intervalo:");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        soma += i;
    }
    printf("a media aritmetica e %.1f",(float)soma/(b-a+1));
    return 0;
}