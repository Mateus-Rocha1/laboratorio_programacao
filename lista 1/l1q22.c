#include <stdio.h>
int main(){
    int a,b,c,num;
    puts("digite um numero de 3 algarismos");
    scanf("%d",&num);
    a= num/100;
    b= (num/10)%10;
    c= num %10;
    printf("a ordem inversa é %d%d%d\n",c,b,a);
    return 0;
}