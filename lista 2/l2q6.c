#include <stdio.h>
int main(){
    int V=0,Vp=0,Vr=0,Vn=0,Vb=0;
    char A;
    while (V>=0){
      puts("[5] para votar em Paulo"); 
      puts("[7] para votar em Renata");
      puts("[0] para votar em branco");
      puts("para finalizar votação digite um numero negativo");
      puts("qualquer outro digito será considerado nulo"); 
      scanf("%d",&V);
      switch(V){
        case 5:
        puts("vc quer msm votar em Paulo?[S][N]");
        scanf(" %c",&A);
        if(A=='S'){
            Vp+= 1;break;
        }else{
            break;
            }    
        case 7:
        puts("vc quer msm votar em Renata?[S][N]");
        scanf(" %c",&A);
        if(A=='S'){
            Vr+= 1;break;
        }else{
            break;
            }    
        case 0:
        puts("vc quer msm votar em branco?[S][N]");
        scanf(" %c",&A);
        if(A=='S'){
            Vb+= 1;break;
        }else{
            break;
            } 
        default:
        if (V<0){
            break;
        }else{
        puts("vc quer msm votar em nulo?[S][N]");
        scanf(" %c",&A);
        if(A=='S'){
            Vn+= 1;break;
        }else{
            break;
            } 
      }
    }
    }
    int vtot = Vp+Vb+Vn+Vr;
    printf("a porcentagem de votos para paulo,para renata,em branco e em nulo foi,respecitivamente,%.1f%%,%.1f%%,%.1f%%,%.1f%%",((100.0*Vp)/vtot),((100.0*Vr)/vtot),((100.0*Vb)/vtot),((100.0*Vn)/vtot));
    return 0;
}