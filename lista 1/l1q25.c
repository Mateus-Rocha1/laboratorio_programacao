#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2;
    puts("informe x1:");
    scanf("%d",&x1);
    puts("informe y1:");
    scanf("%d",&y1);
    puts("informe x2:");
    scanf("%d",&x2);
    puts("informe: y2");
    scanf("%d",&y2);
    printf("a distancia desses dois pontos é %.1f",sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    return 0;
}