#include<stdio.h>
int main(){
    float tf;
    for(int i =10;i<=100;i+=10){
        tf = (9 * i + 160) / 5;
        printf("a temperatura em fahreint é %.1f quando a temperatura em celsius for %d\n",tf,i);
    }
    return 0;
}