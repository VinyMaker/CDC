#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica(int fatorial);

int main(){
	int numero_digitado;
	int resultado_fatorial;
	
	printf("Digite um numero: ");
	scanf("%d",&numero_digitado);

	resultado_fatorial = verifica(numero_digitado);
	printf("O fatorial de %d eh:  %d",numero_digitado,resultado_fatorial);

	return 0;
}

/* //iterativo
int verifica(int termo_fatorial){
	int fatorial = 1;
	int i;
	for(i=2;i<=termo_fatorial;i++){
 		fatorial *= i;
	}
	return fatorial;
	
}
*/

//recursivo
int verifica(int fatorial){
	if(fatorial == 0){
		return 1;
	}
	else{
		return verifica(fatorial-1) * fatorial;
	}

}

