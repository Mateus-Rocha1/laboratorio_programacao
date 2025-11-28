#include <stdio.h>
int main(){
    int altJ = 150;
    int altP = 130;
    int temp = 0;
    while(altJ>=altP){
        altJ += 2;
        altP +=3;
        temp +=1;
    }
    printf("a altura de pedro passa a ser maior q de jose em:%d anos",temp);
    return 0;
}
