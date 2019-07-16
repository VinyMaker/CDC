#include <stdio.h>
#include <string.h>



int main(){

	    char matricula[3];
	    char nome[30];
	    float nota1;
	    float nota2;
	    float nota3;
	

	

	float mediafinal;
    FILE *file1;
    int i=0;
    if ((file1 = fopen("file1.txt", "r")) == NULL) {
        printf("Falha ao abrir o arquivo :(\n");
    }
	else{
        while(file1 != NULL) {
        	int quant_registros_arquivados;
        	printf("Digite a quantidade de registros no arquivo atualmente que deseja ler:\t");
        	scanf("%d",&quant_registros_arquivados);
        	while(i<quant_registros_arquivados){

            fscanf(file1, "%[^;]*c", &matricula);
			printf("\n ---- ALUNO %s ----",matricula);
	
            fscanf(file1, ";%[^;]", &nome);
         	fseek(file1, +1, SEEK_CUR);
			printf("\nNome ...........:  %s\n", nome);
			
            fscanf(file1, "%f[^;]", &nota1);
			printf("Nota 1 ......:  %.2f\n", nota1);
			fseek(file1, +1, SEEK_CUR);
			
            fscanf(file1, "%f[^;]", &nota2);
			printf("Nota 2 ......:  %.2f\n", nota2);
			fseek(file1, +1, SEEK_CUR);
			
			fscanf(file1, "%f[^;]", &nota3);
			printf("Nota 3 ......:  %.2f\n", nota3);
			fseek(file1, +1, SEEK_CUR);
			
			mediafinal = (nota1+nota2+nota3)/3;
			printf("Media Final ....:  %.2f\n" ,mediafinal);
			fseek(file1,+1, SEEK_CUR);
			i++;
		}
		fclose(file1);
		return 0;
        }
        fclose(file1);
    }
    return 0;
}
