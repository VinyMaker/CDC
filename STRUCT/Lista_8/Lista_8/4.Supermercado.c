#include <stdio.h>
#include <stdlib.h>

int main() {
 
 typedef struct dados{
  int codigo;
  char nome[15];
  float preco;
  int quantidade;
 };dados_produto;
 
 int quantidade_produtos;
 printf("Digite a quantidade de produtos para o estoque:  ");
 scanf("%d",&quantidade_produtos);
 
 dados_produto produto[quantidade_produtos];
 
 printf("\n-------Leitura de estoque iniciada--------\n");
 int i;
 for(i=0;i<quantidade_produtos;i++){
  printf("\n_______________________________________\n");
  printf("Digite o codigo do produto %d.......:  ",i+1);
  scanf("%d",&produto[i].codigo);
  
  printf("Digite o nome do produto %d.........:  ",i+1);
  fflush(stdin);
  fgets(produto[i].nome,15,stdin);
  
  printf("Digite o preco do produto %d........:  ",i+1);
  scanf("%f",&produto[i].preco);
  
  printf("Digite o quantidade do produto %d...:  ",i+1);
  scanf("%d",&produto[i].quantidade);
  
 }
 printf("\n-------Leitura de estoque concluida--------");
 
 
 int pedido;
 int quantidade_pedido;
 
 
 printf("Digite o codigo do produto desejado:  ");
 scanf("%d",&pedido);
 printf("Digite a quantidade desejada:  ");
 scanf("%d",&quantidade_pedido);
 printf("\n-------Busca de estoque iniciada--------\n");
 if(pedido==produto[i].codigo){
  while(pedido==produto[i].codigo){
   if(quantidade_pedido>=produto[i].quantidade){
    produto[i].quantidade=((produto[i].quantidade)-(quantidade_pedido));
    printf("Produto encontrado:");
    printf("%d",produto[i].quantidade);
   }
   else{
    printf("Quantidade invalida do produto %d: %s",i,produto[i].nome);
   } 
  }
 }
 else{
  char nova_leitura[2];
  printf("Codigo Inválido ou produto inexistente, digite 's' para ler novamente: \n");
  scanf("%s",&nova_leitura[0]);
  
  if(nova_leitura[0]=="s"){
   scanf("%d",&pedido);
  }
  else{
   return 0;
  }
 }
 
 printf("-------Busca de estoque concluida--------");
 printf("-----------Programa Encerrado-------------"); 
 
 return 0;
}

