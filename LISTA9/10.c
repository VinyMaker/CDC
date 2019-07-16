#include <stdio.h>
#include <stdlib.h>



int verifica(char caractere);

int main(){
	char caractere;
	printf("Digite um caractere: ");
	scanf("%c",&caractere);
	
	verifica(caractere);	
	
}


int verifica(char caractere){
	if(caractere=='a' || caractere=='e' || caractere=='i' || caractere=='o' || caractere=='u'){
		printf("O retorno eh 1, o caractere eh uma vogal: \n");
		return 1;
	}
	else{
		printf("O retorno eh 0, o caractere nao eh uma vogal: \n");
		return 0;
	}
}
