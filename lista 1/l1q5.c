#include <stdio.h>
int main(){
    char sex;
    float alt;
    puts("digite sua altura:");
    scanf("%f",&alt);
    puts("escolha seu sexo:[m][f]");
    scanf(" %c",&sex);
    printf("seu peso ideal é %.1f\n",(sex=='m')? 72.7 * alt - 58: 62.1 * alt - 44.7);
    return 0;
}
