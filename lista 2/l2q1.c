#include <stdio.h>
int main(){
    int dia;
    puts("digite um numero de 1 a 7 para dia da semana(0 para sair):");
    scanf("%d",&dia);

    while(dia != 0){
        switch (dia){
            case 1:printf("domingo\n");break;
            case 2:printf("segunda\n");break;
            case 3:printf("terça\n");break;
            case 4:printf("quarta\n");break;
            case 5:printf("quinta\n");break;
            case 6:printf("sexta\n");break;
            case 7:printf("sábado\n");break;
            default:printf("numero de dia nao valido\n");break;
        }
        puts("digite um numero de 1 a 7 para dia da semana(0 para sair):");
        scanf("%d",&dia);
    }
    puts("programa encerrado.");
    return 0;
}

