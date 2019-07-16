#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n,soma=0,i;
	
	printf("Digite um numero para saber a soma de todos os numeros pares ate n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if (i%2==0){
			soma = soma + i;
		}
		
	}
	
	printf("A soma dos numeros pares e %d",soma);
return 0;
}
