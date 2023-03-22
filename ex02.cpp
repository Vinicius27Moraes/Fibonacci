#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
    int n=1,a,soma=0,n1=0,resu=0,cont=0;    
    printf("Informe um numero para calcular a sequencia de Fibonacci: \n ");
    scanf("%d", &n1);
    
    for(a=0;a<1000;){
	 	
		if(a==n1){
		resu=cont;
		}
        printf("%d-",a);                   
        a=a+soma;                 
        soma=n;
        n=a;
		cont++; 
		
    }
    	printf("\n\n");
    	if(resu==0){
    		printf("O numero informado nao pertence a sequencia Fibonacci!!");
		}else{
			printf("O numero %i esta na colocacao: %i",n1,resu+1);
		}
			
    		
  return 0;
}