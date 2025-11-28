#include <stdio.h>
int main(){
    int X,Y;
    puts("insira um numero:");
    scanf("%d",&X);
    puts("insira o segundo numero:");
    scanf("%d",&Y);
    if (Y==0){
        printf("A soma, o produto e a diferenca sao: %d, %d, %d\n", X+Y, X*Y, X-Y);
        printf("Divisao por zero nao e permitida.\n");
    } else {
        printf("A soma, o produto, a diferenca, o quociente e o resto da divisao entre esses dois numeros e, respectivamente:\n");
        printf("%d, %d, %d, %d, %d\n", X+Y, X*Y, X-Y, X/Y, X%Y);
    }
    return 0;
}

