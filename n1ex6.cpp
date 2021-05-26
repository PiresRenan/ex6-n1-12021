#include <stdio.h>
#include <stdbool.h>
int main(){
    int valor;
    int r1=0;
    int r2=0;
    int r3=0;
    int r4=0;
    
    printf("Digite o valor do produto em reais:");
    scanf("%d",&valor);
    printf("O valor do produto eh:%d",valor);
        while(valor>0){
        if(valor>=10){
            valor=valor-10;
            r1++;
        }
        else if(valor>=5){
            valor=valor-5;
            r2++;
        }
        else if(valor>=2){
            valor=valor-2;
            r3++;
        }
        else if(valor>=1){
            valor=valor-1;
            r4++;
        }
        }
       printf("\nVoce usara %d notas de 10\n %d notas de 5 \n%d notas de 2 \n%d notas de 1",r1,r2,r3,r4);
    
  return 0;
}