#include <stdio.h>
int main(){
    int num,a,b,d,e;
    puts("digite um numero de 5 algarismos");
    scanf("%d",&num);
    a = num/10000;
    b = (num/ 1000)%10;
    d = (num/10)%10;
    e= num %10;
    if(a==e && b==d){
        puts("é palindormo");
    }else{
        puts("nao é palindormo");
    }
    return 0;
}