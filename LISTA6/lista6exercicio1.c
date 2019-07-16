#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main() {
	
	int tam_A=6;	//tam_A e referente ao tamanho do vetor A
	
	int vetorA[tam_A],soma=0,i;
	
	//os valores abaixo foram previamente informados.
	vetorA[0]=15;
	vetorA[1]=20;
	vetorA[2]=3;
	vetorA[3]=1;
	vetorA[4]=26;
	vetorA[5]=2;
	
	for(i=0;i<tam_A;i++){
		soma += vetorA[i];
	}
	printf("=====================\n");
	printf("A soma do vetor e %d\n",soma);
	printf("=====================");	
	
}
