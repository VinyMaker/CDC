#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float numeros[4];
	int quantidade; //quantidade de numeros para ler
	
	scanf("%d",&quantidade);
	
	
	printf("CUBO DE %d NUMEROS, numeros de ordem em ordinal:\n\n",quantidade);
	
	while(quantidade>0){
		
		printf("ARMAZENA o NUMERO %d\n",quantidade);
		printf("Digite o %d numero: ",quantidade);
		
		
		scanf("%f",&numeros[quantidade]);
		
		printf("NUMERO LIDO: %d\n",quantidade);
		quantidade= quantidade - 1;
		printf("NUMERO ATUAL %d\n\n\n",quantidade);
}

	for(quantidade=1;quantidade<=4;quantidade++){
		printf("O cubo do %d numero e %2.f\n",quantidade,pow(numeros[quantidade],3));
}
return 0;
}
