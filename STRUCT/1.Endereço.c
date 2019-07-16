#include <stdio.h>
#include <conio.h>  

  
int main(){
	/*Criar a struct */
  struct ficha_de_contato{
    
	char nome[50];
    char endereco[50];
    int telefone;
    
  };

  int quant_pessoas,i;
  
  printf("Informe a quantidade pessoas a terem seus dados coletados:  ");
  scanf("%d",&quant_pessoas);
  
struct ficha_de_contato pessoas[quant_pessoas];

for(i=0;i<quant_pessoas;i++){
	printf("\n---------- Cadastro de pessoa: %d -----------\n\n",i+1);
	
	printf("Nome da pessoa %d:  ",i+1);
	fflush(stdin);
	fgets(pessoas[i].nome, 40, stdin);
	
	printf("Endereco da pessoa %d:  ",i+1);
	fflush(stdin);
	fgets(pessoas[i].endereco, 40, stdin);
	
	printf("Informe um telefone de contato:   ");
	scanf("%d", &pessoas[i].telefone);
}

printf("\n\n --------- Veja abaixo os dados informados: ---------\n\n");	
for(i=0;i<quant_pessoas;i++){
	printf("\n\n --------- PESSOA %d ---------\n",i+1);
	printf("Nome ...........:  %s", pessoas[i].nome);
	printf("Endereço .......:  %s", pessoas[i].endereco);
	//printf("Telefone .......:  %d\n" ,pessoas[i].telefone);
}
  getch();
  return(0);
}
