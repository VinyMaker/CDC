#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Somat�rio de 1/X at� N
	int N;
	float E=0,i;
	
	printf("Digite o en�simo termo do somatorio: ");
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
