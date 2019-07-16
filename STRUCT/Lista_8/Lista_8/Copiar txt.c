#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiartxt(FILE *file1, FILE *file2);

int main(){
	FILE *file1;
	file1 = fopen("file1.txt","r");
	
	
	if(file1 == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        return 0;
    }
    else{
    	FILE *file2;
		file2 = fopen("file2.txt","w");
    	printf("Arquivo Encontrado.\n\n");

		printf("\n");	
		printf("Copiando TXT:\n");
		copiartxt(file1,file2);
		printf("Concluido:\n");
		
		fclose(file1);
		fclose(file2);

		}

	return 0;
}

void copiartxt(FILE *file1, FILE *file2){
	char transfere[100];
	while(fgets(transfere,100,file1) != NULL){
		fputs(transfere,file2);
	}
	
}
