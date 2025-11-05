#include <stdio.h>
int main(){
    int x,y,z;
    int *px=&x ,*py=&y,*pz=&z;
    puts("insira o valor de x:");
    scanf("%d",px);
    puts("insira o valor de y:");
    scanf("%d",py);
    *pz = *px + *py;
    printf("a soma de x e y é %d  [%p]",*pz,pz);
    return 0;
}
//tem q declarar a variavel antes,usar o bglh do =&
//nao precisa do * no scanf
//pra mostrar valor *pz pra mostar endereço pz