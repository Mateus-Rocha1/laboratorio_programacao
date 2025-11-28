#include <stdio.h>
int main() {
    unsigned long long int graos = 1;  
    unsigned long long int soma = 1;

    for (int i = 2; i <= 64; i++) {  
        graos *= 2 ;      
        soma += graos ;   
    }
    printf("o somatorio final de graos e %llu\n",soma);
    return 0;
}