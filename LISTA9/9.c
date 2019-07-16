#include <stdio.h>
#include <stdlib.h>

typedef struct{
		char nome[50];
		int idade;
		char sexo[10];
		char cor_cabelo[10];
		char cor_olhos[10];
}registros;

void leia_registro(registros *pRegistro,int quant_registros);
void exibe_registro(registros *pRegistro,int quant_registros);


int main()
{	
	int quant_registros;
	int *pRegistro;
	printf("Digite a quantidade de registros a serem lidos: ");
	scanf("%d",&quant_registros);
	
	registros registro[quant_registros];
	pRegistro = &registro[0];
	

	leia_registro(pRegistro,quant_registros);
	exibe_registro(pRegistro,quant_registros);
	
	
	printf("\n\nFim dos Registros\n\n");
    return 0;
}


void leia_registro(registros *pRegistro,int quant_registros){
	int i;
	printf("=========Lendo Registro: ========\n");
	for(i=0;i<quant_registros;i++){
		printf("Informe o nome:\n");
	    fflush(stdin);
	    fgets(pRegistro->nome,50,stdin);
	    printf("Informe o sexo:\n");
	    fflush(stdin);
	    fgets(pRegistro->sexo,10,stdin);
	    printf("Informe a cor dos olhos:\n");
	    fflush(stdin);
	    fgets(pRegistro->cor_olhos,10,stdin);
	    printf("Informe a cor dos cabelos:\n");
	    fgets(pRegistro->cor_cabelo,10,stdin);
	    printf("Informe a idade:\n");
	    scanf("%d",&pRegistro->idade);
	    printf("-----------\n");
	    pRegistro++;
	}
	printf("\n");
}

void exibe_registro(registros *pRegistro,int quant_registros){
	int i;
		printf("=========Exibindo Registro: ========\n");
	for(i=0;i<quant_registros;i++){
		printf("Nome:  %s\n", (*pRegistro).nome);
		//*(f + %d)
		printf("Sexo:  %s\n", (*pRegistro).sexo);
		printf("Cor dos olhos:  %s\n", (*pRegistro).cor_olhos);
		printf("Cor dos cabelos:  %s\n", (*pRegistro).cor_cabelo);
		printf("Idade: %d\n",(*pRegistro).idade);
	    printf("-----------\n");
		pRegistro++;
	}
	printf("\n");
}
