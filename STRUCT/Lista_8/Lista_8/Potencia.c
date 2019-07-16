#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float potencia(float base,float expoente);


int main(){
	float base;
	float expoente;
	float resultado;
	
	printf("Digite a base e o expoente da potencia desejada: (base ^ expoente)\n");
	scanf("%f ^ %f",&base,&expoente);
	
	resultado = potencia(base,expoente);
	printf("%.2f elevado a %.2f eh:  %.2f\n",base,expoente,resultado);
	
	return 0;
	}

//recursivo
float potencia(float base,float expoente){
	if(expoente==0){
		return 1;
	}
	else{
		return base*potencia(base,expoente-1);
			/*
			3^4 = 81
				3 * (3,3-1)=27;
				3 * (3,2-1)=9;
				3 * (3,1-1)=3;
				3 * (1)
			*/
	}
}


//iterativo
/*
float potencia(float base,float expoente){
	float resultado=1;
	int i;
	for(i = 1;i<=expoente;i++){
		resultado *= base ;
	}
	return resultado;
}
*/




