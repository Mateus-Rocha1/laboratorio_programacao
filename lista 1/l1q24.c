#include <stdio.h>
int main(){
    int tempo;
    puts("informe o tempo em segundos:");
    scanf("%d",&tempo);
    printf("nesse tempo há %d horas,%d minutos e %d segundos",(tempo/3600),(tempo%3600)/60,(tempo%3600)%60);
    return 0;
}