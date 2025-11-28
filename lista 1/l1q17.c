#include <stdio.h>
int main(){
    float raio;
    puts("qual o raio da circuferencia?");
    scanf("%f",&raio);
    printf("seu diametro é %.2f\n",raio*2);
    printf("sua circuferencia é %.2f\n",2* 3.14159*raio);
    printf("sua area é %.2f\n", 3.14159*raio*raio);
    return 0;
}