#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica(int numero);

int main(){
	int numero_digitado;
	printf("Digite um numero: ");
	scanf("%d",&numero_digitado);
	verifica(numero_digitado);	

	
}


int verifica(int numero){
	if(numero%2==0){
		printf("O retorno eh 1, Numero par! \n");
		return 1;
	}
	else if(numero%2!=0){
		printf("O retorno eh 0, Numero impar! \n");
		return 0;
	}
}
