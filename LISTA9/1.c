#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float verifica(float numero);

int main(){
	float numero_digitado;
	printf("Digite um numero: ");
	scanf("%f",&numero_digitado);
	verifica(numero_digitado);	

	
}


float verifica(float numero){
	if(numero>0){
		printf("O retorno eh 1, Numero positivo: \n");
		return 1;
	}
	else{
		printf("O retorno eh 0, Numero negativo: \n");
		return 0;
	}
}
