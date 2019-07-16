#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
int quant_cadastros;
typedef struct endereco{
    char rua[50];
    char bairro[50];
    char cidade[50];
	char estado[30];
	int cep;
	
}enderecos;

typedef struct cadastro{
	char nome[50];
	enderecos recebe_endereco;
	float salario;
	int identidade;
	int cpf;
	char estado_civil[20];
	int telefone;
	int idade;
	char sexo[2];
}cadastros;
cadastros cadastro[quant_cadastros]; 
   
    printf("Digite a quantidade de cadastros a serem feitos:\n");
    scanf("%d",&quant_cadastros);
	
    // preencher cadastro
    int i;
	for(i=0;i<quant_cadastros;i++){		
		printf("\n---------- Cadastro de pessoa: %d -----------\n\n",i+1);
	
		printf("Nome da pessoa %d:  ",i+1);
		fflush(stdin);
		fgets(cadastro[i].nome, 50, stdin);
	
		printf("-------Endereco da pessoa %d------",i+1);
			printf("\nRUA:  ");
			fflush(stdin);
			fgets(cadastro[i].recebe_endereco.rua, 50, stdin);
			printf("\nBAIRRO:  ");
			fflush(stdin);
			fgets(cadastro[i].recebe_endereco.bairro, 50, stdin);
			printf("\nCIDADE:  ");
			fflush(stdin);
			fgets(cadastro[i].recebe_endereco.cidade, 50, stdin);
			printf("\nESTADO:  ");
			fflush(stdin);
			fgets(cadastro[i].recebe_endereco.estado, 30, stdin);
			printf("\nCEP:  ");
			scanf("%d",&cadastro[i].recebe_endereco.cep);

		printf("Informe o salario....:   ");
		scanf("%f", &cadastro[i].salario);
		
		printf("Informe a identidade (apenas numeros)....:   ");
		scanf("%d", &cadastro[i].identidade);
		
		printf("Informe o CPF (apenas numeros)....:   ");
		scanf("%d", &cadastro[i].cpf);		
		
		printf("Informe o estado civil....:  ");
		fflush(stdin);
		fgets(cadastro[i].estado_civil, 20, stdin);
		
		printf("Informe um telefone de contato....:   ");
		scanf("%d", &cadastro[i].telefone);

		printf("Informe a idade da pessoa %d...:   ",i+1);
		scanf("%d", &cadastro[i].idade);	
		
		printf("Informe o sexo (M -> Masculino / F -> Feminino)....:   ");
		scanf("%s",&cadastro[i].sexo);	
		printf("\nO CADASTRO %d FOI CONCLUIDO COM SUCESSO-----------\n\n",i+1);
}


    // Verificando cadastrado mais velho
    char cadastro_mais_velho[2];
    printf("\n============================================\n");
    printf("Digite 's' para exibir qual o cadastrado mais velho: (ou pressione qualquer tecla para continuar)\n");
    scanf("%s",&cadastro_mais_velho[0]);
    if(cadastro_mais_velho[0]=='s'){
		printf("\n\n=========Verificando Cadastrado Mais Velho==============\n");
	    
		int maior_idade;
	    int posicao_maior_idade;
	    
	    maior_idade=cadastro[0].idade;
	    posicao_maior_idade=0;
	    
	    for(i=0;i<quant_cadastros;i++){
		    if (cadastro[i].idade > maior_idade){
		    	maior_idade = cadastro[i].idade;
		    	posicao_maior_idade = i;
			}
		}
		printf("Confira o cadastro da pessoa mais velha cadastrada: \n");
		
		printf("A pessoa mais velha cadastrada esta no cadastro %d\n",posicao_maior_idade);
		printf("O cadastro de %s possui a maior idade\n",cadastro[posicao_maior_idade].nome);
		printf("A identidade sua identidade eh: %d\n",cadastro[posicao_maior_idade].identidade);
		printf("A pessoa mais velha possui %d anos\n",cadastro[posicao_maior_idade].idade);
		printf("\n============================================\n");
	}
	else{
		printf("\nOperacao Cancelada!\n");
	}
	printf("\n============================================\n");
    //printf(sexo masculino)
	printf("Digite 's' se deseja exibir todos o cadastrados de algum sexo especifico:  (ou pressione qualquer tecla para continuar)\n");
	char cadastro_sexo_inicia[2];
	scanf("%s",&cadastro_sexo_inicia[0]);
	if(cadastro_sexo_inicia[0]=='s'){
		char cadastro_sexo[2];
		printf("Qual sexo deseja consultar os nomes?  (M -> Masculino /F -> Feminino/S -> Sair da verificacao)  ");
    	scanf("%s",cadastro_sexo[0]);
    	if(cadastro_sexo[0]=='M'){
    		for(i=0;i<quant_cadastros;i++){
    			if(strcmp(cadastro[i].sexo,cadastro_sexo)==0){
					printf("Nome:  %s\n",cadastro[i].nome);
				}
			}
		}
		else if(cadastro_sexo[0]=='F'){
			for(i=0;i<quant_cadastros;i++){
				if(strcmp(cadastro[i].sexo,cadastro_sexo)==0){
					printf("Nome: %s\n",cadastro[i].nome);
				}
			}
		}
		else{
			printf("Busca Cancelada!\n");
		}
	}
	else{
		printf("Busca Cancelada!\n");		
		}
		

    printf("\n============================================\n");
	float verifica_salario =1000.00;
    printf("Digite 's' se deseja exibir todos o cadastrados com salario superior a %.2f:  (ou pressione qualquer tecla para continuar)\n",verifica_salario);
	char cadastro_salario_inicia[2];
	scanf("%s",&cadastro_salario_inicia[0]);
	
	if(cadastro_salario_inicia[0]=='s'){
		printf("\n\n=========Verificando Cadastrados==============\n");
		for(i=0;i<quant_cadastros;i++){
			if(cadastro[i].salario>verifica_salario){
				printf("Nome:  %s\n",cadastro[i].nome);
				printf("Salario:  %.2f\n",cadastro[i].salario);
			}
		}
	}
	else{
		printf("\n\n=========Verificacao Cancelada!==============\n");
	}

    printf("\n============================================\n");

	printf("Digite 's' se deseja buscar algum cadastro por identidade:  (ou pressione qualquer tecla para continuar)\n");
	char busca_identidade_inicia[2];
	scanf("%s",&busca_identidade_inicia[0]);
	if(busca_identidade_inicia[0]=='s'){
		int busca_identidade;
		printf("Digite uma identidade para buscar no cadastro:  ");
    	scanf("%d",busca_identidade);
    	for(i=0;i<quant_cadastros;i++){
			if(cadastro[i].identidade==busca_identidade){
				printf("Cadastro Encontrado!\n");
				printf("Nome:  %s",cadastro[i].nome);
				printf("idade:  %d",cadastro[i].idade);
				printf("Identidade:  %d",cadastro[i].identidade);
				printf("CPF:  %d",cadastro[i].cpf);
				printf("Estado Civil:  %s",cadastro[i].estado_civil);
				printf("Salario:  %.2f",cadastro[i].salario);
				printf("Sexo:  %s",cadastro[i].sexo);
				//printf("Endereço:  %s".cadastro[i].recebe_endereco);
			}
		}
		printf("\n\n=========Verificacao Concluida!==============\n");
	}
	else{
			printf("\n\n=========Verificacao Cancelada!==============\n");
	}
  	printf("\nPROGRAMA ENCERRADO!\n");
  	printf("Tenha um bom dia!\n");
    return 0;
}
