#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Tabuada de 1 at� N
	
	int i;
	float N;
	//float Resultado; Para poss�vel uso futuro
	
	printf("Digite um numero que deseja ver a tabuada: ");
	scanf("%f",&N);
	
	i=1;
	
	while(i<=N){
		//resultado = i*N;
		printf("%d X %.2f = %.2f\n",i,N,i*N); //Altere o numero de "%.(2)f" para obter maior precis�o no resultado"
		i++;
	}
	
	
	
	return 0;
}
