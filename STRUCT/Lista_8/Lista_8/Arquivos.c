#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	FILE *texto;
	texto = fopen("texto.txt","a+");
	
	if(texto == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        return 0;
    }
    else{
    	printf("Arquivo Encontrado.\n\n");
    	
    	char leitura[100];
    	while(fgets(leitura,100,texto) != NULL){
    		printf("%s",leitura);
    		fflush(stdin);
  
		}
		printf("\n");
		
		char escrever[100];
		fgets(escrever, 100, stdin); 
		fputs(escrever,texto);

		fclose(texto);
		fopen("texto.txt","a+");
		
		while(fgets(leitura,100,texto) != NULL){
    		printf("%s",leitura);
    		fflush(stdin);
  
		}
		
		return 0;
		}
		
	fclose(texto);
	
	return 0;
}
