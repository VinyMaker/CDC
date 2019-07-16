#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Defina o tamanho dos intervalos
	int intervalo_inferior=1;
	int intervalo_superior=500;
	
	
	int soma=0,i;
	
	for(i=intervalo_inferior;i<intervalo_superior;i++){
		if(i%2==0){
			soma += i;
		}
	}
	printf("============================================================\n");
	printf("A soma de todos os numeros pares no intervalo de %d a %d e %d",intervalo_inferior,intervalo_superior,soma);
	printf("\n============================================================\n");
	return 0;
}
