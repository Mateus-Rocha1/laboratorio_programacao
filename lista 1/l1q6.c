#include <stdio.h>
int main(){
    int h,m,s,tots;
    puts("escreva um horario no formato 00:00:00");
    scanf("%d:%d:%d",&h,&m,&s);
    tots = (h*3600)+(m*60)+s;
    printf("o total de segundos é:%d",tots);
    return 0;
}

