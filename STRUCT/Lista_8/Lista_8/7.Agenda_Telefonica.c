#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
int quant_contatos;
typedef struct endereco{
    char rua[50];
    int numero;
    char complemento[20];
    char bairro[50];
	int cep;
    char cidade[50];
	char estado[30];
	char pais[50];
}enderecos;

typedef struct data{
	int dia;
	int mes;
	int ano;
}datas;

typedef struct telefone{
	int ddd;
	int numero;
}telefones;

struct agenda{
	char nome[50];
	char email[100];
	enderecos recebe_endereco;
	datas aniversario;
	telefones telefone;
	char observacoes[200];
};
struct agenda contato[quant_contatos];

printf("\n===============Bem Vindo ao Menu=================\n");
char menu_inicia[2];
printf("Digite 'C' para cadastrar alguem na agenda:");
printf("Digite 'P' para pesquisar por nome:");
printf("Digite 'M' para pesquisar por mes de aniversario:");
printf("Digite 'V' para ver a agenda simplificada:");
printf("Digite 'X' ou outra tecla para encerrar!");
scanf("%s",&menu_inicia[0]);
int i; 
   
if(menu_inicia[0]=='C'){
	printf("Digite a quantidade de contatos a serem feitos:\n");
    scanf("%d",&quant_contatos);
	
    // preencher contato

	for(i=0;i<quant_contatos;i++){		
		printf("\n---------- Contato: %d -----------\n\n",i+1);
	
		printf("Nome da pessoa %d:  ",i+1);
		fflush(stdin);
		fgets(contato[i].nome, 50, stdin);
		
		printf("Email:  ");
		fflush(stdin);
		fgets(contato[i].email, 100, stdin);
	
		printf("-------Endereco da pessoa %d------",i+1);
			printf("\nRUA:  ");
			fflush(stdin);
			fgets(contato[i].recebe_endereco.rua, 50, stdin);
			printf("NUMERO:  ");
			scanf("%d",contato[i].recebe_endereco.numero);
			printf("\nCOMPLEMENTO:  ");
			fflush(stdin);
			fgets(contato[i].recebe_endereco.complemento, 20, stdin);
			printf("\nBAIRRO:  ");
			fflush(stdin);
			fgets(contato[i].recebe_endereco.bairro, 50, stdin);
			printf("\nCEP:  ");
			scanf("%d",&contato[i].recebe_endereco.cep);
			printf("\nCIDADE:  ");
			fflush(stdin);
			fgets(contato[i].recebe_endereco.cidade, 50, stdin);
			printf("\nESTADO:  ");
			fflush(stdin);
			fgets(contato[i].recebe_endereco.estado, 30, stdin);
			printf("\nPAIS:  ");
			fflush(stdin);
			fgets(contato[i].recebe_endereco.pais, 50, stdin);

		
		printf("Informe um telefone de contato....:  (xxx) xxxxxxxxx ");
		printf("DDD:  ");
		scanf("%d", &contato[i].telefone.ddd);
		printf("Numero:   ");
		scanf("%d", &contato[i].telefone.numero);
		
		printf("Informe a data de aniversario....:  dd/mm/aaaa");
		printf("Dia:  ");
		scanf("%d", &contato[i].aniversario.dia);
		printf("Mes:   ");
		scanf("%d", &contato[i].aniversario.mes);
		printf("Ano:   ");
		scanf("%d", &contato[i].aniversario.ano);
		
		printf("\nDigite alguma observacao/apelido:  ");
		fflush(stdin);
		fgets(contato[i].observacoes, 200, stdin);
		
		printf("\nO CADASTRO %d FOI CONCLUIDO COM SUCESSO-----------\n\n",i+1);
}

}
if(menu_inicia[0]=='P'){
	char busca_nome[50];
	int posicao_contato;
	fflush(stdin);
	fgets(busca_nome, 50, stdin);
	for(i=0;i<quant_contatos;i++){
        if(strcmp(contato[i].nome,busca_nome)==0){
            	posicao_contato=i;
                //contatos_encontrados++;
				printf("Contato Encontrado!\n");
				printf("Nome:  %s\n",contato[i].nome);
				printf("Email:  %s\n",contato[i].email);
				printf("Telefone:  (%d) %d\n",contato[i].telefone.ddd,contato[i].telefone.numero);
				printf("Aniversario  %d/%d/%d  \n",contato[i].aniversario.dia,contato[i].aniversario.mes,contato[i].aniversario.ano);
				printf("Obs:  %s\n",contato[i].observacoes);
				printf("Endereço: CEP %d",contato[i].recebe_endereco.cep);
		}
	}
	printf("\n\n=========Contatos Pesquisados!==============\n");
}
if(menu_inicia[0]=='M'){
	printf("Digite um mes para pesquisar:  ");
	int busca_mes;
	int posicao_contato;
	scanf("%d",&busca_mes);
	for(i=0;i<quant_contatos;i++){
        if(contato[i].aniversario.mes==busca_mes){
        	printf("Contato Encontrado!\n");
			printf("Nome:  %s\n",contato[i].nome);
			printf("Email:  %s\n",contato[i].email);
			printf("Telefone:  (%d) %d\n",contato[i].telefone.ddd,contato[i].telefone.numero);
			printf("Aniversario  %d/%d/%d  \n",contato[i].aniversario.dia,contato[i].aniversario.mes,contato[i].aniversario.ano);
			printf("Obs:  %s\n",contato[i].observacoes);
			printf("Endereço: CEP %d",contato[i].recebe_endereco.cep);
		}
	}
}
if(menu_inicia[0]=='V'){
	for(i=0;i<quant_contatos;i++){
    	printf("Contato Encontrado!\n");
		printf("Nome:  %s\n",contato[i].nome);
		printf("Email:  %s\n",contato[i].email);
		printf("Telefone:  (%d) %d\n",contato[i].telefone.ddd,contato[i].telefone.numero);
	}
}
if(menu_inicia[0]=='X'){
  	printf("\nPROGRAMA ENCERRADO!\n");
  	printf("Tenha um bom dia!\n");
}
else{
  	printf("\nPROGRAMA ENCERRADO!\n");
  	printf("Tenha um bom dia!\n");
}
    return 0;
}
