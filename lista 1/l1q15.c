#include <stdio.h>
int main(){
    int horas;
    float desc,salB,salL,aula;
    puts("qual o valor da hora aula?");
    scanf("%f",&aula);
    puts("quantas horas trabalha no mes?");
    scanf("%d",&horas);
    puts("qual a porcentagem de desconto do inss?");
    scanf("%f",&desc);
    salB = aula * horas;
    salL = salB - ((desc/100)*salB);
    printf("o salario liquido é %.1f\n o salario bruto é %.1f\n",salL,salB);
    return 0;
}