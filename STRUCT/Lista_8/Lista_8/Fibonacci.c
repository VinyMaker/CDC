#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int fibonacci_iterativo(int n);
int fibonacci_recursivo(int n);

int main(){
	int termo_fibonacci;
	int resultadofibonacci[termo_fibonacci];
	
	printf("Digite o termo desejado da sequencia de Fibonacci: \t");
	scanf("%d",&termo_fibonacci);
	

	int i;
	int n = termo_fibonacci;
	for(i=0;i<termo_fibonacci;i++){
		resultadofibonacci[i] = fibonacci_iterativo(n);
		n--;
	}
	
	FILE *fibo;
	fibo = fopen("bonatchi.txt","w");
	
	if(fibo == NULL){
		printf("Não foi possivel encontrar o arquivo.");
		return 0;
	}
	else{
		printf("Arquivo encontrado.\n");
		for(i=0;i<termo_fibonacci;i++){
	    	fprintf(fibo,"%d\n",resultadofibonacci[i]);
		}
		
			
	    
		fclose(fibo);	
	}
	fopen("bonatchi.txt","r");
	if(fibo == NULL){
		printf("Não foi possivel encontrar o arquivo.");
		return 0;
	}
	else{
		printf("Arquivo encontrado.\n");
		int leitura;
		while(fscanf(fibo,"%d\n",&leitura) != EOF){
			printf("%d\n",leitura);
		}
		
			
	    
		fclose(fibo);	
	}
	
	
	//printf("O termo %d da sequencia recursiva eh:  %d\n",termo_fibonacci,resultadofibonacci);
	//resultadofibonacci = fibonacci_iterativo(termo_fibonacci);
	//printf("O termo %d da sequencia iterativa eh:  %d\n",termo_fibonacci,resultadofibonacci);
	
	return 0;
	}

//recursivo

int fibonacci_recursivo(int n){
	if(n == 1 || n == 2){
		return n-1;
	}
	else{
		return fibonacci_recursivo(n-1) + fibonacci_recursivo(n - 2);
	}
}
*/

//iterativo

int fibonacci_iterativo(int n){
	int n1=0;
	int n2=1;
	int i;
	int resultado=n1;
	for(i=1;i<=n;i++){
		resultado = (n1 + n2);
		n1 = n2;
		n2 = resultado;
	}
	return resultado - n1;
}



