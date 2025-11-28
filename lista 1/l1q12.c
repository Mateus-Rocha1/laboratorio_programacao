#include <stdio.h>
int main(){
    int a,b,carry;
    puts("insria A:");
    scanf("%d",&a);
    puts("insira B:");
    scanf("%d",&b);
    carry = a;
    a=b;
    b= carry;
    printf("os novos valores de A e B são,respectivamente,%d,%d",a,b);
    return 0;
}