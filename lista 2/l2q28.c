#include <stdio.h>
int main() {
    unsigned int a,b;
    unsigned char X,Y;
    printf("Digite X: ");
    scanf("%u",&a);
    X=a;
    printf("Digite Y (>=5): ");
    scanf("%u",&b);
    Y=b;
    if(Y<5){
        printf("Y inválido.\n");
        return 0;
    }
    for(int i=0;i<4;i++){
        unsigned char bit=(X>>(7-i))&1;
        unsigned char elemento=Y-4+i;
        unsigned char escondido=(elemento&0xFE)|bit;
        printf("Elemento %d -> %u (LSB = %u)\n",elemento,escondido,bit);
    }
    for(int i=0;i<4;i++){
        unsigned char bit=(X>>(3-i))&1;
        unsigned char elemento=Y+1+i;
        unsigned char escondido=(elemento&0xFE)|bit;
        printf("Elemento %d -> %u (LSB = %u)\n",elemento,escondido,bit);
    }
    return 0;
}
