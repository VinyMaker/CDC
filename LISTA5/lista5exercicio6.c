#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Somatorio de 1/X até N
	int N;
	float E=0,i;
	
	printf("Digite o enésimo termo do somatorio: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		E = E + (1/i);
	}
	printf("=======================\n");
	printf("O valor final de E = %.2f",E);
	
	return 0;
}
