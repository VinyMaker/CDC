#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int valor1, int valor2);

int main(){
	int numero1,numero2;
	int resultado;
	printf("Digite um numero: ");
	scanf("%d",&numero1);
	
	printf("Digite um numero: ");
	scanf("%d",&numero2);
	
	resultado = soma(numero1,numero2);	
	printf("A soma de %d ate %d eh: %d",numero1,numero2,resultado);
	
}


int soma(int valor1, int valor2){
	int i;
	int soma_retorno=0;
	int soma=0;
	for(i=valor1;i<=valor2;i++){
		soma += i;
	}
	soma_retorno=soma;
	return soma_retorno;
}
