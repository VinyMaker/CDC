#include <stdio.h>

int main() {
	int quant_mercad=100; //quantidade  de  mercadorias 
    float faturamento=0,preco_mercadoria[quant_mercad],quantidade_vendida[quant_mercad];

    printf("===================================\n");
    printf("Digite os preços de %d produto(s): \n",quant_mercad);
    printf("===================================\n");

	int i;
    for(i=0;i<quant_mercad;i++){
        printf("Digite o preco da mercadoria %d: ",(i+1));
        scanf("%f", &preco_mercadoria[i]);
    }
    printf("===============================================\n");
    printf("Digite a quantidade de venda de %d produto(s): \n",quant_mercad);
    printf("===============================================\n");
    for(i=0;i<quant_mercad;i++){
        printf("Digite a quantidade de venda da mercadoria %d: ",(i+1));
        scanf("%f", &quantidade_vendida[i]);
    }
    
   	printf("===============================================\n");
    printf("============CALCULANDO FATURAMENTO=============\n");
 
    
	for(i=0;i<quant_mercad;i++){
        faturamento+=(quantidade_vendida[i]*preco_mercadoria[i]);
	}


   	printf("===============================================\n");
    printf("=============FATURAMENTO CALCULADO=============\n");
   	printf("===============================================\n");
   
    printf("O faturamento mensal do armazem foi de R$ %.2f\n",faturamento);	
   	printf("===============================================\n");
    
    return 0;
}
