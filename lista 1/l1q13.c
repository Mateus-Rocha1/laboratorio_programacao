#include <stdio.h>
int main(){
    float F,C;
    puts("insira a temperatura celsius: ");
    scanf("%f",&C);
    F=(9 * C + 160) / 5;
    printf("a temperatura referente em fahrenheit é: %.1f",F);
    return 0;
}