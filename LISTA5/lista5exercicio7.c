#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Somatório de 1/X até N
	int N;
	float E=0,i;
	
	printf("Digite o enésimo termo do somatorio: ");
	scanf("%d",&N);
	
	i=1;
	
	while(i<=N){
		E = E + (1/i);
		i++;
	}
	printf("=======================\n");
	printf("O valor final de E = %.2f",E);
	
	return 0;
}
