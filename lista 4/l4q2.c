#include <stdio.h>
int main(){
    int x=1,y=2,temp;
    int *px=&x,*py=&y;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("o novo valor de x é %d e de y é %d",*px,*py);
    return 0;
}