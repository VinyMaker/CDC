#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiarpares(FILE *file1, FILE *file2);

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
		printf("Copiando Pares:\n");	
		copiarpares(file1,file2);
		printf("Concluido:\n");
		
		fclose(file1);
		fclose(file2);
	}

	return 0;
}

void copiarpares(FILE *file1, FILE *file2){
	int leitura;
    while((fscanf(file1, "%d\n", &leitura)) != EOF){
        if(leitura%2==0){
        	fprintf(file2,"%d\n",leitura);
		}
    }

}
